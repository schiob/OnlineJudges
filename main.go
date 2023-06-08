package main

import (
	"fmt"
	"strings"
)

func main() {
	fmt.Print(ReverseWords("This is an example!"))
}

func ReverseWords(str string) string {
	var result strings.Builder
	var word strings.Builder

	for _, char := range str {
		if char == ' ' {
			prevWord := word.String()
			for i := len(prevWord) - 1; i >= 0; i-- {
				fmt.Fprintf(&result, "%c", prevWord[i])
			}
			fmt.Fprint(&result, " ")
			word.Reset()
		} else {
			fmt.Fprintf(&word, "%c", char)
		}
	}
	prevWord := word.String()
	for i := len(prevWord) - 1; i >= 0; i-- {
		fmt.Fprintf(&result, "%c", prevWord[i])
	}

	return result.String() // reverse those words
}
