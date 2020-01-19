package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

var sc = bufio.NewScanner(os.Stdin)

func main() {
	var n int
	var s, t string
	fmt.Scan(&n)
	fmt.Scan(&s, &t)

	sSlice := strings.Split(s, "")
	tSlice := strings.Split(t, "")

	var ret string

	for i := 0; i < n; i++ {
		ret += sSlice[i] + tSlice[i]
	}

	fmt.Println(ret)
}
