/*
Descrição: Leia quatro valores inteiros A, B, C e D.
A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).

Entrada
O arquivo de entrada contém 4 valores inteiros.

Saída
Imprima a mensagem DIFERENCA com todas as letras maiúsculas, conforme exemplo abaixo, com um espaço em branco antes e depois da igualdade.
*/
package main

import "fmt"

func main() {
	var A, B, C, D int

	fmt.Scanln(&A)
	fmt.Scanln(&B)
	fmt.Scanln(&C)
	fmt.Scanln(&D)

	fmt.Println("DIFERENCA =", A*B-C*D)

}
