package main

import (
	"fmt"
)

func figures(numberParams, number1, number2 int8) int8 {
	var result int8
	if number2 == 0 {
		fmt.Println(number1)
	} else {
		result = (mdc(numberParams, number2, number1%number2))
	}
}

func main() {
	var numberParams int8
	fmt.Scanf("%d", &numberParams)
	figures(numberParams)

}
