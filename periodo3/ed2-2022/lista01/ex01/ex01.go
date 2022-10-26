package ex01

func sucessor(x int) int {
	return x + 1
}

func Ex01(x, y int) int {
	if y == 0 {
		return x
	}
	x = sucessor(x)
	y--
	return Ex01(x, y)
}
