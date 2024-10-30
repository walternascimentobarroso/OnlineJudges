package main

import "fmt"

// Definição do nó da lista ligada
type ListNode struct {
    Val  int
    Next *ListNode
}

// Função para somar duas listas ligadas
func addTwoNumbers(l1 *ListNode, l2 *ListNode) *ListNode {
    // Nó inicial para armazenar a soma
    dummyHead := &ListNode{}
    current := dummyHead
    carry := 0

    // Percorre ambas as listas enquanto houver nós ou um carry sobrando
    for l1 != nil || l2 != nil || carry != 0 {
        // Se o nó não for nulo, obtemos o valor, caso contrário, usamos 0
        val1, val2 := 0, 0
        if l1 != nil {
            val1 = l1.Val
            l1 = l1.Next
        }
        if l2 != nil {
            val2 = l2.Val
            l2 = l2.Next
        }

        // Soma os valores e o carry
        sum := val1 + val2 + carry
        carry = sum / 10 // Atualiza o carry
        current.Next = &ListNode{Val: sum % 10} // Cria o novo nó com o dígito da unidade
        current = current.Next // Avança para o próximo nó
    }

    // Retorna a lista ligada começando após o nó inicial dummy
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
