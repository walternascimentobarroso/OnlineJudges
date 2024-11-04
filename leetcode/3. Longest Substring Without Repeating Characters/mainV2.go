package main

import (
	"fmt"
)

/**
 * Complexidade:

    Complexidade de Tempo: O(n), onde n é o comprimento da string. Cada caractere é processado uma vez.
    Complexidade de Espaço: O(min(n, m)), onde m é o número de caracteres diferentes no conjunto de entrada (neste caso, pode ser até 256 para caracteres ASCII, ou mais se usarmos Unicode).

Essa abordagem é mais eficiente e lida com a verificação de repetições de maneira muito mais rápida em comparação com a abordagem anterior.
*/
func lengthOfLongestSubstring(s string) int {
	charIndex := make(map[rune]int) // Mapa para rastrear os índices dos caracteres
	maxLength := 0
	start := 0 // Posição inicial da substring atual

	for i, char := range s {
		// Se o caractere já foi visto e está dentro da substring atual
		if index, found := charIndex[char]; found && index >= start {
			// Atualiza o início da substring
			start = index + 1
		}

		// Atualiza o índice do caractere atual
		charIndex[char] = i

		// Atualiza o comprimento máximo da substring sem repetições
		if currentLength := i - start + 1; currentLength > maxLength {
			maxLength = currentLength
		}
	}

	return maxLength
}

func main() {
	// Exemplo de uso
	fmt.Println(lengthOfLongestSubstring("abcabcbb")) // Saída esperada: 3
}
