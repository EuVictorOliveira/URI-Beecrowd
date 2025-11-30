#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;

int main(){
    int codigoPeca1, qtdPeca1;
    double valorPeca1;
    int codigoPeca2, qtdPeca2;
    double valorPeca2;

    cin >> codigoPeca1 >> qtdPeca1 >> valorPeca1;
    cin >> codigoPeca2 >> qtdPeca2 >> valorPeca2;

    double total = qtdPeca1 * valorPeca1 + qtdPeca2 * valorPeca2;

    cout << "VALOR A PAGAR: R$ " << std::fixed << std::setprecision(2) << total << std::endl;

    return 0;
}