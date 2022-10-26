package main

import "fmt"

func OrdenarAlunos(notas []int) int {
	return 1
	// var n = len(nomes)
	// for i := 1; i < n; i++ {
	// 	j := i
	// 	for j > 0 {
	// 		if nomes[j-1] > nomes[j] {
	// 			nomes[j-1], nomes[j] = nomes[j], nomes[j-1]
	// 		}
	// 		j = j - 1
	// 	}
	// }
	// return nomes
}

func main() {
	var (
		numeroAlunos   int
		numeroSorteado int
		i              int
		nome           string
	)
	nomes := []string{}
	fmt.Scanf("%d %d", &numeroAlunos, &numeroSorteado)
	for i < numeroAlunos {
		fmt.Scanf("%s", &nome)
		nomes = append(nomes, nome)
		i++
	}
	nomes = OrdenarNomes(nomes)
	fmt.Println(nomes[numeroSorteado-1])
}
