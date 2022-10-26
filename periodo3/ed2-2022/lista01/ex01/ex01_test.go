package ex01

import "testing"

func TestEx01(t *testing.T) {
	t.Run("Adiciona 5 + 5", func(t *testing.T) {
		esperado := 10
		resultado := Ex01(5, 5)

		if esperado != resultado {
			t.Errorf("Conta deu errado, esperado %d, resultado %d", esperado, resultado)
		}
	})

	t.Run("Adiciona 2 + 2", func(t *testing.T) {
		esperado := 4
		resultado := Ex01(2, 2)

		if esperado != resultado {
			t.Errorf("Conta deu errado, esperado %d, resultado %d", esperado, resultado)
		}
	})
}
