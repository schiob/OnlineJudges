package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	suma := 0
	idx := 0
	mapaLetrasGrupo := make(map[rune]int)

	scanner := bufio.NewScanner(os.Stdin)
	for scanner.Scan() {
		line := scanner.Text()

		mapaElfo := make(map[rune]int)
		for _, letter := range line {
			if _, ok := mapaElfo[letter]; !ok {
				mapaElfo[letter] = 1
			}
		}

		for k := range mapaElfo {
			if _, ok := mapaLetrasGrupo[k]; ok {
				mapaLetrasGrupo[k] += 1
			} else {
				mapaLetrasGrupo[k] = 1
			}
		}

		if idx%3 == 2 {
			var repetido rune

			for k, v := range mapaLetrasGrupo {
				if v == 3 {
					repetido = k
				}
			}

			if int(repetido) < 97 {
				// Uppercase
				suma += int(repetido) - 65 + 27
			} else {
				suma += int(repetido) - 96
			}

			mapaLetrasGrupo = make(map[rune]int)
		}

		idx++
	}

	fmt.Println(suma)
}
