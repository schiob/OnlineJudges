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

	chose := map[string]map[string]string{
		"A": {
			"X": "Z",
			"Y": "X",
			"Z": "Y",
		},
		"B": {
			"X": "X",
			"Y": "Y",
			"Z": "Z",
		},
		"C": {
			"X": "Y",
			"Y": "Z",
			"Z": "X",
		},
	}

	scanner := bufio.NewScanner(os.Stdin)
	for scanner.Scan() {
		line := scanner.Text()
		row := strings.Split(line, " ")
		selection := chose[row[0]][row[1]]
		score += points[selection]
		score += match[row[0]][selection]
	}
	fmt.Println(score)
}
