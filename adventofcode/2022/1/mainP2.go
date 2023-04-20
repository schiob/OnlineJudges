package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
	"strconv"
)

func main() {
	count := make([]int, 0)
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
			count = append(count, thisElf)
			thisElf = 0
		}
	}
	sort.Ints(count)
	fmt.Println(count[len(count)-1] + count[len(count)-2] + count[len(count)-3])
}
