package main

import (
	"fmt"
)

func OrdenarAlunos(notas []int) []int {
	novoArray := make([]int, len(notas))
	copy(novoArray, notas)
	var n = len(novoArray)
	for i := 1; i < n; i++ {
		j := i
		for j > 0 {
			if novoArray[j-1] < novoArray[j] {
				novoArray[j-1], novoArray[j] = novoArray[j], novoArray[j-1]
			}
			j = j - 1
		}
	}
	return novoArray
}

func GetOrdemInicial() (numbers []int) {
	var (
		repeat int
		number int
	)
	fmt.Scanf("%d", &repeat)
	for i := 0; i < repeat; i++ {
		fmt.Scanf("%d", &number)
		numbers = append(numbers, number)
	}
	return
}

func CompareArrays(numbers []int) (numeroMudancas int) {
	order := OrdenarAlunos(numbers)
	for i := 0; i < len(numbers); i++ {
		if numbers[i] == order[i] {
			numeroMudancas++
		}
	}
	return
}

func main() {
	var repeat int
	fmt.Scanf("%d", &repeat)
	for i := 0; i < repeat; i++ {
		numbers := GetOrdemInicial()
		fmt.Println(CompareArrays(numbers))
	}
}
