package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	suma := 0
	scanner := bufio.NewScanner(os.Stdin)
	for scanner.Scan() {
		line := scanner.Text()
		izq := line[:len(line)/2]
		der := line[len(line)/2:]

		var repetido rune
	OUTER:
		for _, charIzq := range izq {
			for _, charDer := range der {
				if charDer == charIzq {
					repetido = charDer
					break OUTER
				}
			}
		}

		if int(repetido) < 97 {
			// Uppercase
			suma += int(repetido) - 65 + 27
		} else {
			suma += int(repetido) - 96
		}
	}

	fmt.Println(suma)
}
