package main

import "fmt"

// data type
// Numeric - int,int8,int16,int32,int64,uint,float32,and float64
// string - collection of character's
// boolean - true or false

func main() {

	// variable declaration
	var a int = 20
	var b = 30
	c := 40

	isaccpt := true
	// re-assign
	isaccpt = false
	const p = 100
	// p = 20//error beause const value don't re assign
	str := "Rafiul islam"

	fmt.Println("Hello word", a, b, c)
	fmt.Println(str, isaccpt,p)
}
