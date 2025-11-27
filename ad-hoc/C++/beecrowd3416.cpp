#include <iostream>
#include <iomanip>
#include <math.h>


using namespace std;

int main(){
    int qtdAlunos, qtdCafeVez, qtdPorAluno;


    cin >> qtdAlunos >> qtdCafeVez >> qtdPorAluno;

    float totalConsumido = (float) (qtdAlunos * qtdPorAluno) / 1000;
    
    float qtdRodadas = totalConsumido / qtdCafeVez;

    int tetoRodadas = (int) ceil(qtdRodadas);
    
    cout << tetoRodadas*qtdCafeVez << endl;


    return 0;

}
