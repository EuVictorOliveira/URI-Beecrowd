#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(void){
    string senha;
    int qtdVariacoes = 1, nTestes;


    cin >> nTestes;

    while(nTestes > 0){

        cin >> senha;

        int tamanho = senha.length();

        for(int i = 0; i < tamanho; i++){

            senha[i] = tolower(senha[i]);


        }

        for(int i = 0; i < tamanho; i++){

            if(senha[i] == 'a' || senha[i] == 'e' || senha[i] == 'i' || senha[i] == 'o' || senha[i] == 's')
                qtdVariacoes *= 3;
            else
                qtdVariacoes *= 2;


        }

        cout << qtdVariacoes << endl;
        qtdVariacoes = 1;

        nTestes--;

    }



    return 0;

}