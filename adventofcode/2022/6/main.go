package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	for scanner.Scan() {
		line := scanner.Text()

		for idx := 3; idx < len(line); idx++ {
			tempMap := make(map[byte]int)
			if _, ok := tempMap[line[idx]]; ok {
				continue
			} else {
				tempMap[line[idx]] = 1
			}
			if _, ok := tempMap[line[idx-1]]; ok {
				continue
			} else {
				tempMap[line[idx-1]] = 1
			}
			if _, ok := tempMap[line[idx-2]]; ok {
				continue
			} else {
				tempMap[line[idx-2]] = 1
			}
			if _, ok := tempMap[line[idx-3]]; ok {
				continue
			} else {
				tempMap[line[idx-3]] = 1
			}
			fmt.Printf("%d\n", idx+1)
			break
		}
	}
}
