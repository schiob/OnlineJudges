package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)

	trees := make([][]int, 0)
	visible := make([][]bool, 0)

	for scanner.Scan() {
		line := scanner.Text()
		lineInt := make([]int, len(line))
		for i, char := range line {
			treeInt, err := strconv.Atoi(string(char))
			if err != nil {
				panic(err)
			}
			lineInt[i] = treeInt
		}

		trees = append(trees, lineInt)
		visible = append(visible, make([]bool, len(line)))
	}

	// izq a der
	for i := 0; i < len(trees); i++ {
		biggest := -1
		for j := 0; j < len(trees[i]); j++ {
			if trees[i][j] > biggest {
				biggest = trees[i][j]
				visible[i][j] = true
			}
		}
	}

	// der a izq
	for i := 0; i < len(trees); i++ {
		biggest := -1
		for j := len(trees[i]) - 1; j >= 0; j-- {
			if trees[i][j] > biggest {
				biggest = trees[i][j]
				visible[i][j] = true
			}
		}
	}

	// top a down
	for i := 0; i < len(trees); i++ {
		biggest := -1
		for j := 0; j < len(trees[i]); j++ {
			if trees[j][i] > biggest {
				biggest = trees[j][i]
				visible[j][i] = true
			}
		}
	}

	// down a top
	for i := len(trees) - 1; i >= 0; i-- {
		biggest := -1
		for j := len(trees[i]) - 1; j >= 0; j-- {
			if trees[j][i] > biggest {
				biggest = trees[j][i]
				visible[j][i] = true
			}
		}
	}

	// Result sum
	result := 0
	for _, row := range visible {
		for _, val := range row {
			if val {
				result++
			}
		}
	}

	fmt.Println(result)
	// for _, row := range trees {
	// 	fmt.Println(row)
	// }
	// for _, row := range visible {
	// 	fmt.Println(row)
	// }
}
