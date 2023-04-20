package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	max := 0
	thisElf := 0

	scanner := bufio.NewScanner(os.Stdin)
	for scanner.Scan() {
		line := scanner.Text()
		if len(line) != 0 {
			val, err := strconv.ParseInt(line, 10, 64)
			if err != nil {
				panic(err)
			}

			thisElf += int(val)
		} else {
			if thisElf > max {
				max = thisElf
			}
			thisElf = 0
		}
	}
	if thisElf > max {
		max = thisElf
	}
	fmt.Println(max)
}
