#include <iostream>
#include <string>
#include <iomanip>

using std::cout;
using std::cin;
using std::string;

int main(){
    string nome;
    double salario, vendas;

    cin >> nome >> salario >> vendas;

    salario = salario + (vendas * 0.15);

    cout << "TOTAL = R$ " <<std::fixed << std::setprecision(2) << salario << std::endl;


    return 0;
}