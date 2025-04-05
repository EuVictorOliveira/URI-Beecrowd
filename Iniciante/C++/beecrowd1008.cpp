#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int numero, horasTrabalhadas;
    double salarioHora;
    
    cin >> numero >> horasTrabalhadas;
    cin >> salarioHora;
    cout << fixed << setprecision(2);

    cout << "NUMBER = " << numero << "\n";
    cout << "SALARY = U$ " << horasTrabalhadas*salarioHora << endl;


    return 0;

}