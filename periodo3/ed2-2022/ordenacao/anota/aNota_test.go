package main

import (
	"testing"
)

func TestOrdenarAlunos(t *testing.T) {
	verificarSaidaTeste := func(t *testing.T, resultado, esperado int) {
		t.Helper()
		if resultado != esperado {
			t.Errorf("O resultado esperado era %v\nO resultado foi %v", esperado, resultado)
		}
	}

	t.Run("Caso 01", func(t *testing.T) {
		resultado := OrdenarAlunos([]int{100, 80, 90})
		esperado := 1

		verificarSaidaTeste(t, resultado, esperado)
	})
}
