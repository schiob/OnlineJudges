package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {
	totales := 0
	scanner := bufio.NewScanner(os.Stdin)
	for scanner.Scan() {
		line := scanner.Text()

		lineArr := strings.Split(line, ",")
		elfOneArr := strings.Split(lineArr[0], "-")
		elfTwoArr := strings.Split(lineArr[1], "-")

		lowElfOne, err := strconv.Atoi(elfOneArr[0])
		if err != nil {
			panic(err)
		}
		topElfOne, err := strconv.Atoi(elfOneArr[1])
		if err != nil {
			panic(err)
		}
		lowElfTwo, err := strconv.Atoi(elfTwoArr[0])
		if err != nil {
			panic(err)
		}
		topElfTwo, err := strconv.Atoi(elfTwoArr[1])
		if err != nil {
			panic(err)
		}

		if topElfOne > topElfTwo {
			if lowElfOne <= topElfTwo {
				totales++
			}
		} else if topElfTwo > topElfOne {
			if lowElfTwo <= topElfOne {
				totales++
			}
		} else {
			totales++
		}
	}

	fmt.Println(totales)
}
