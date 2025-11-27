#include <iostream>
#include <string>
#include <string.h>
#include <cstdlib>

using namespace std;

int main(){
    string operacao, problema = "P=NP";
    int nTestes, a, b, soma = 0, tamanhoA = 0, tamanhoB = 0;

    cin >> nTestes;

    while(nTestes > 0){

        cin >> operacao;

        if(operacao.compare(problema) == 0){
            cout << "skipped" << endl;
            nTestes--;
            continue;
        }

        int tamanhoOperacao = operacao.length();

        for(int i = 0; operacao[i] != '+'; i++)
            tamanhoA++;

        for(int i = 0; i < tamanhoOperacao; i++){
            
            if(operacao[i] == '+'){
                for(int j = i; operacao[j] != '\0'; j++){
                         tamanhoB++;
                    }
    
                }     
            }
    


        string numeroA = operacao.substr(0, tamanhoA);
        string numeroB = operacao.substr(tamanhoOperacao - tamanhoB, tamanhoB);

        a = atoi(numeroA.c_str());
        b = atoi(numeroB.c_str());

        soma = a + b;

        cout << soma << endl;

        soma = 0;
        tamanhoA = 0;
        tamanhoB = 0;

        nTestes--;

    }




    return 0;
}