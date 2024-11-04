package main

import (
	"fmt"
)

/**
 * A complexidade da função `lengthOfLongestSubstring` que foi implementada em Go é **O(n²)** no pior caso, devido à combinação de loops aninhados. Vamos analisar a complexidade mais detalhadamente:

1. **Loop Externo**: O loop que itera sobre cada caractere da string `s` percorre `n` caracteres, onde `n` é o comprimento da string. Este loop tem complexidade **O(n)**.

2. **Loop Interno (`contains`)**: Para cada caractere, a função `contains()` é chamada, que verifica se o caractere já está presente no slice `output`. Esta função percorre todo o slice `output`, que pode ter, no máximo, `n` elementos (no pior caso, quando todos os caracteres da string são únicos). Portanto, a complexidade da função `contains()` é **O(m)**, onde `m` é o comprimento do slice `output`, que, no pior caso, pode ser até `n`.

Assim, em cada iteração do loop externo, o loop interno pode levar até **O(n)**, resultando em uma complexidade total de:

\[
O(n) \times O(n) = O(n^2)
\]

### Resumo:

- **Complexidade de Tempo**: **O(n²)** no pior caso.
- **Complexidade de Espaço**: **O(n)**, onde `n` é o número de caracteres únicos que podem ser armazenados no slice `output`.

Para melhorar a eficiência, uma abordagem comum é usar um mapa para armazenar os índices dos caracteres, o que permitiria uma complexidade de tempo de **O(n)** no total, já que tanto a inserção quanto a verificação de presença em um mapa têm complexidade média de **O(1)**.
*/
func lengthOfLongestSubstring(s string) int {
	output := []rune{} // Usando rune para suportar caracteres Unicode
	maxLength := 0

	for _, char := range s {
		// Verifica se o caractere já está no slice output
		for contains(output, char) {
			// Remove o primeiro elemento até que o caractere atual não esteja mais no slice
			output = output[1:]
		}
		
		// Adiciona o caractere atual ao slice
		output = append(output, char)

		// Atualiza o comprimento máximo se necessário
		if len(output) > maxLength {
			maxLength = len(output)
		}
	}

	return maxLength
}

// Função auxiliar para verificar se o slice contém um caractere
func contains(slice []rune, char rune) bool {
	for _, v := range slice {
		if v == char {
			return true
		}
	}
	return false
}

func main() {
	// Exemplo de uso
	fmt.Println(lengthOfLongestSubstring("abcabcbb")) // Saída esperada: 3
}
