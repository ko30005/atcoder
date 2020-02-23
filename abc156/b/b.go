package main

import (
	"fmt"
	"strconv"
	"unicode/utf8"
)

func main() {
	var n, k int

	fmt.Scan(&n, &k)

	fmt.Println(utf8.RuneCountInString(strconv.FormatInt(int64(n), k)))
}
