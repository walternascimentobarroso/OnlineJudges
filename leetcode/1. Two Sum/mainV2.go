package main

import "fmt"
/**
 * Esta solução tem complexidade de tempo O(n) e espaço O(n), 
 * onde n é o número de elementos em nums.
 */

func twoSum(nums []int, target int) []int {
		// Cria um mapa para armazenar os índices dos números
		indices := make(map[int]int)

		// Percorre o array
		for i, num := range nums {
				// Calcula a diferença necessária para alcançar o target
				complement := target - num

				// Verifica se o complemento está no mapa
				if idx, found := indices[complement]; found {
						return []int{idx, i}
				}

				// Armazena o índice do número atual no mapa
				indices[num] = i
		}

		// Retorna um array vazio caso não encontre uma solução
		return []int{}
}

func main() {
		nums := []int{2, 7, 11, 15}
		target := 9
		result := twoSum(nums, target)
		fmt.Println(result) // Output: [0, 1]
}
