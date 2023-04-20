package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

type Stack struct {
	Arr []rune
}

func (s *Stack) peek() rune {
	return s.Arr[len(s.Arr)-1]
}

func (s *Stack) pop() rune {
	elem := s.Arr[len(s.Arr)-1]
	s.Arr = s.Arr[:len(s.Arr)-1]
	return elem
}

func (s *Stack) add(elem rune) {
	s.Arr = append(s.Arr, elem)
}

func (s *Stack) addStart(elem rune) {
	s.Arr = append([]rune{elem}, s.Arr...)
}

func main() {
	arrOfStacks := make([]Stack, 0)
	moveTime := false
	scanner := bufio.NewScanner(os.Stdin)
	for scanner.Scan() {
		line := scanner.Text()
		if len(arrOfStacks) == 0 {
			arrOfStacks = make([]Stack, (len(line)+1)/4)

		}
		if line == "" {
			moveTime = true
			continue
		}

		if !moveTime {
			for i := 0; i < len(arrOfStacks); i++ {
				idxChar := (4 * i) + 1
				if rune(line[idxChar]) == '1' {
					break
				}
				if rune(line[idxChar]) != ' ' {
					arrOfStacks[i].addStart(rune(line[idxChar]))
				}
			}
		} else {
			splitedLine := strings.Split(line, " ")

			movNumber, err := strconv.Atoi(splitedLine[1])
			if err != nil {
				panic(err)
			}
			fromStackIdx, err := strconv.Atoi(splitedLine[3])
			if err != nil {
				panic(err)
			}
			fromStackIdx--
			toStackIdx, err := strconv.Atoi(splitedLine[5])
			if err != nil {
				panic(err)
			}
			toStackIdx--

			for i := 0; i < movNumber; i++ {
				elem := arrOfStacks[fromStackIdx].pop()
				arrOfStacks[toStackIdx].add(elem)
			}
		}
	}

	for _, stack := range arrOfStacks {
		fmt.Printf("%c", stack.peek())
	}
	fmt.Println()
}
