#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main(void){
    int nTestes;
    string numeroA, numeroB;

    cin >> nTestes;

    while(nTestes > 0){

        cin >> numeroA >> numeroB;

        int tamanhoA = numeroA.length();
        int tamanhoB = numeroB.length();
    
        if(tamanhoB > tamanhoA){
            cout << "nao encaixa" << endl;
            nTestes--;
            continue;
        }

        string stringComp = numeroA.substr(tamanhoA - tamanhoB, tamanhoB);

        if(stringComp.compare(numeroB) == 0)
            cout << "encaixa" << endl;
        else
            cout << "nao encaixa" << endl; 

        

        nTestes--;

    }






    return 0;

}