package main

import (
	"fmt"
)

func main() {
	var a, b int

	fmt.Scan(&a, &b)

	if a >= 10 || b >= 10 {
		fmt.Printf("%d", -1)
		return
	}

	fmt.Printf("%d", a*b)
}
