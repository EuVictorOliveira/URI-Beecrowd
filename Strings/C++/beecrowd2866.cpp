#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
    int nTestes;
    string mensagemCriptografada;

    cin >> nTestes;

    for(int i = 1; i <= nTestes; i++){

        cin >> mensagemCriptografada;

        int tamanho = mensagemCriptografada.length();

        for(int j = tamanho - 1; j >= 0; j--){

            if(islower(mensagemCriptografada[j])){

                    cout << mensagemCriptografada[j];

                }
            }

        cout << endl;

    }

     return 0;
     
}