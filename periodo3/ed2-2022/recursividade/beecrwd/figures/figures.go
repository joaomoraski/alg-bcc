package main

import (
	"fmt"
)

func figures(number1, number2 int) int {
	if number2 == 0 {
		return number1
	} else {
		return (figures(number2, number1%number2))
	}
}

func main() {
	var (
		number1      int
		number2      int
		numberParams int
		i            int = 0
	)
	fmt.Scanf("%d", &numberParams)
	for i < numberParams {
		fmt.Scanf("%d %d", &number1, &number2)
		resultado := figures(number1, number2)
		fmt.Println(resultado)
		i++
	}

}
