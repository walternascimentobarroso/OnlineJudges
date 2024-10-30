package main

import "fmt"

// Definição do nó da lista ligada
type ListNode struct {
    Val  int
    Next *ListNode
}

// Função principal para somar as listas
func addTwoNumbers(l1 *ListNode, l2 *ListNode) *ListNode {
    // Extraindo os valores de l1 e l2 em slices
    var nums1, nums2 []int
    for l1 != nil {
        nums1 = append(nums1, l1.Val)
        l1 = l1.Next
    }
    for l2 != nil {
        nums2 = append(nums2, l2.Val)
        l2 = l2.Next
    }

    // Variáveis para armazenar o resultado e carry
    var result []int
    carry := 0
    i, j := 0, 0

    // Soma dos valores dos arrays (simulando a lista)
    for i < len(nums1) || j < len(nums2) || carry > 0 {
        sum := carry
        if i < len(nums1) {
            sum += nums1[i]
            i++
        }
        if j < len(nums2) {
            sum += nums2[j]
            j++
        }
        carry = sum / 10
        result = append(result, sum%10) // Adiciona o dígito da unidade ao resultado
    }

    // Constrói a lista ligada final a partir de result
    dummyHead := &ListNode{}
    current := dummyHead
    for _, num := range result {
        current.Next = &ListNode{Val: num}
        current = current.Next
    }

    return dummyHead.Next
}

// Função auxiliar para imprimir a lista ligada
func printList(node *ListNode) {
    for node != nil {
        fmt.Print(node.Val)
        if node.Next != nil {
            fmt.Print(" -> ")
        }
        node = node.Next
    }
    fmt.Println()
}

func main() {
    // Exemplo de listas l1 e l2
    l1 := &ListNode{2, &ListNode{4, &ListNode{3, nil}}} // Representa 342
    l2 := &ListNode{5, &ListNode{6, &ListNode{4, nil}}} // Representa 465

    // Soma as duas listas e imprime o resultado
    result := addTwoNumbers(l1, l2)
    printList(result) // Saída: 7 -> 0 -> 8
}
