package main

import "fmt"
/**
 * Esta solução é menos eficiente com complexidade de tempo O(n2)O(n2), 
 * mas é fácil de entender, pois verifica todas as combinações possíveis.
 */
func twoSum(nums []int, target int) []int {
	// Percorre todos os pares de elementos no array
	for i := 0; i < len(nums); i++ {
				for j := i + 1; j < len(nums); j++ {
						// Verifica se a soma dos pares é igual ao target
						if nums[i] + nums[j] == target {
								return []int{i, j}
						}
				}
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