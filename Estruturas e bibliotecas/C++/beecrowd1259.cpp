/*

    Descrição do problema: Considerando a entrada de valores inteiros não negativos, ordene estes valores segundo o seguinte critério:

    Primeiro os Pares
    Depois os Ímpares
    Sendo que deverão ser apresentados os pares em ordem crescente e depois os ímpares em ordem decrescente.

    Entrada
    A primeira linha de entrada contém um único inteiro positivo N (1 < N <= 105) Este é o número de linhas de entrada que vem logo a seguir. As próximas N linhas conterão, cada uma delas, um valor inteiro não negativo.

    Saída
    Apresente todos os valores lidos na entrada segundo a ordem apresentada acima. Cada número deve ser impresso em uma linha, conforme exemplo abaixo.

*/
#include <algorithm>
#include <iostream>
#include <vector>

bool comparador(int a, int b){
    
    if(a % 2 == 0){
        if(b % 2 == 0)
            return a < b;
        else
            return true;
    }else if(b % 2 == 0)
        return false;
    else
        return a > b;

}

int main(){
    int N;
    std::vector<int> valores;

    std::cin >> N;
    valores.assign(N, 0);

    for(int i = 0; i < N; i++)
        std::cin >> valores[i];
    
    sort(valores.begin(), valores.end(), comparador);

    for(int i = 0; i < N; i++)
        std::cout << valores[i] << std::endl;


    return 0;

}