package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func main() {
	score := 0

	points := map[string]int{
		"X": 1,
		"Y": 2,
		"Z": 3,
	}

	match := map[string]map[string]int{
		"A": {
			"X": 3,
			"Y": 6,
			"Z": 0,
		},
		"B": {
			"X": 0,
			"Y": 3,
			"Z": 6,
		},
		"C": {
			"X": 6,
			"Y": 0,
			"Z": 3,
		},
	}

	scanner := bufio.NewScanner(os.Stdin)
	for scanner.Scan() {
		line := scanner.Text()
		row := strings.Split(line, " ")
		score += points[row[1]]
		score += match[row[0]][row[1]]
	}
	fmt.Println(score)
}
