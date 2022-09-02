// package main

// import "fmt"

// func oddOrEven(numberOfParams int) {
// 	if numberOfParams == 0 {
// 		return
// 	}
// 	var number int
// 	var signal = "NEGATIVE"
// 	var result string
// 	fmt.Scanf("%d", &number)
// 	if number == 0 {
// 		fmt.Printf("NULL\n")
// 		oddOrEven(numberOfParams - 1)
// 		return
// 	}
// 	if number%2 != 0 {
// 		result += "ODD"
// 	} else {
// 		result += "EVEN"
// 	}
// 	if number > 0 {
// 		signal = "POSITIVE"
// 	}
// 	fmt.Println(result, signal)
// 	oddOrEven(numberOfParams - 1)
// 	return
// }

// func main() {
// 	var numberOfParams int

// 	fmt.Scanf("%d", &numberOfParams)
// 	oddOrEven(numberOfParams)
// }
