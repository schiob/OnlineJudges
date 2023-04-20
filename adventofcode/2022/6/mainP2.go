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

	OUTER:
		for idx := 3; idx < len(line); idx++ {
			tempMap := make(map[byte]int)
			for j := 0; j < 14; j++ {
				if _, ok := tempMap[line[idx-j]]; ok {
					continue OUTER
				} else {
					tempMap[line[idx-j]] = 1
				}
			}

			fmt.Println(idx + 1)
			break
		}
	}
}
