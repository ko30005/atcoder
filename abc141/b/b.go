package main

import (
	"fmt"
	"strings"
)

func main() {
	var s string
	fmt.Scan(&s)

	slice := strings.Split(s, "")
	for i, str := range slice {
		if i%2 == 0 {
			if !(str == "R" || str == "U" || str == "D") {
				fmt.Println("No")
				return
			}
		} else {
			if !(str == "L" || str == "U" || str == "D") {
				fmt.Println("No")
				return
			}
		}
	}
	fmt.Println("Yes")
}
