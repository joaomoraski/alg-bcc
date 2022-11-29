package main

import (
	"fmt"
)

func partition(arr []int, low, high int) ([]int, int) {
	pivot := arr[high]
	i := low
	for j := low; j < high; j++ {
		if arr[j] < pivot {
			arr[i], arr[j] = arr[j], arr[i]
			i++
		}
	}
	arr[i], arr[high] = arr[high], arr[i]
	return arr, i
}

func quickSort(arr []int, low, high int) []int {
	if low < high {
		var p int
		arr, p = partition(arr, low, high)
		arr = quickSort(arr, low, p-1)
		arr = quickSort(arr, p+1, high)
	}
	return arr
}

func quickSortStart(arr []int) []int {
	return quickSort(arr, 0, len(arr)-1)
}

func main() {
	for {
		var (
			repeat  int
			valor   int
			numbers []int
			minNota int
		)
		n, err := fmt.Scanf("%d %d", &repeat, &valor)
		if n == 0 || err != nil {
			break
		}
		var number int
		for i := 0; i < repeat; i++ {
			fmt.Scanf("%d", &number)
			numbers = append(numbers, number)
		}
		quickSortStart(numbers)
		for i := 0; i < valor; i++ {
			minNota += numbers[i]
		}
		fmt.Println(minNota)
	}
}
