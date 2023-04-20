package main

import (
	"bufio"
	"fmt"
	"os"
	"path"
	"sort"
	"strconv"
	"strings"
)

type Stack struct {
	Arr []string
}

func (s *Stack) peek() string {
	return s.Arr[len(s.Arr)-1]
}

func (s *Stack) pop() string {
	elem := s.Arr[len(s.Arr)-1]
	s.Arr = s.Arr[:len(s.Arr)-1]
	return elem
}

func (s *Stack) add(elem string) {
	s.Arr = append(s.Arr, elem)
}

func (s *Stack) printPath() string {
	return path.Join(s.Arr...)
}

func main() {
	var dirStack Stack
	dirTotals := make(map[string]int)
	dirsInDir := make(map[string][]string)

	scanner := bufio.NewScanner(os.Stdin)
	for scanner.Scan() {
		line := scanner.Text()
		splitedLine := strings.Split(line, " ")

		// check if is command
		if splitedLine[0] == "$" {
			// if "cd"
			if splitedLine[1] == "cd" {
				if splitedLine[2] == ".." {
					dirStack.pop()
				} else {
					dirStack.add(splitedLine[2])
				}
			}
			// ignore "ls"
		} else {
			workingDir := dirStack.printPath()
			// ls output
			if splitedLine[0] == "dir" {
				// dir
				dirPath := path.Join(workingDir, splitedLine[1])
				if _, ok := dirsInDir[workingDir]; ok {
					dirsInDir[workingDir] = append(dirsInDir[workingDir], dirPath)
				} else {
					dirsInDir[workingDir] = []string{dirPath}
				}
			} else {
				// file
				fileSize, err := strconv.Atoi(splitedLine[0])
				if err != nil {
					panic(err)
				}
				if _, ok := dirTotals[workingDir]; ok {
					dirTotals[workingDir] += fileSize
				} else {
					dirTotals[workingDir] = fileSize
				}
			}
		}
	}

	osMaxSize := 70000000
	rootSize := calcTotal("/", dirsInDir, dirTotals)
	dispSizq := osMaxSize - rootSize
	needLib := 30000000 - dispSizq

	// fmt.Printf("root: %d\n", rootSize)
	// fmt.Printf("disp: %d\n", dispSizq)
	// fmt.Printf("needLib: %d\n", needLib)

	keys := make([]string, 0, len(dirTotals))
	for key := range dirTotals {
		keys = append(keys, key)
	}

	sort.SliceStable(keys, func(i, j int) bool {
		return dirTotals[keys[i]] < dirTotals[keys[j]]
	})

	for _, key := range keys {
		if dirTotals[key] >= needLib {
			fmt.Println(dirTotals[key])
			break
		}
	}
}

func calcTotal(dirPathName string, dirsInDir map[string][]string, dirTotals map[string]int) int {
	total := 0
	if val, ok := dirTotals[dirPathName]; ok {
		total += val
	}

	for _, dir := range dirsInDir[dirPathName] {
		totalDir := calcTotal(dir, dirsInDir, dirTotals)
		total += totalDir
	}

	if _, ok := dirsInDir[dirPathName]; ok {
		dirsInDir[dirPathName] = nil
	}

	dirTotals[dirPathName] = total
	return total
}
