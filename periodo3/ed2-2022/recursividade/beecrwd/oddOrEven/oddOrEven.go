package main

import "fmt"

func recursiveCalc(number int) int {
	if number == 1 || number == 0 {
		return number
	}
	return recursiveCalc(number - 2)
}

func oddOrEven(numberOfParams int) {
	if numberOfParams == 0 {
		return
	}
	var (
		signal = "POSITIVE"
		result = "EVEN"
	)
	var number int
	fmt.Scanf("%d", &number)
	if number == 0 {
		fmt.Printf("NULL\n")
		oddOrEven(numberOfParams - 1)
		return
	}
	if number < 0 {
		signal = "NEGATIVE"
		number *= -1
	}
	if recursiveCalc(number) == 1 {
		result = "ODD"
	}
	fmt.Println(result, signal)
	oddOrEven(numberOfParams - 1)
	return
}
func main() {
	var numberOfParams int
	fmt.Scanf("%d", &numberOfParams)
	oddOrEven(numberOfParams)
}
