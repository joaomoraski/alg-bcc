package main

import "fmt"

var calls int

func fibonnachos(number int) int { // ARIBA ARIBA
	calls++
	if number == 0 {
		return 0
	}
	if number == 1 {
		return 1
	}
	return fibonnachos(number-1) + fibonnachos(number-2)
}

func main() {
	var (
		numberParams int
		number       int
		i            int
	)
	fmt.Scanf("%d", &numberParams)
	for i < numberParams {
		fmt.Scanf("%d", &number)
		calls = -1
		var resultado int = fibonnachos(number)
		i++
		fmt.Printf("fib(%d) = %d calls = %d\n", number, calls, resultado)
	}

}
