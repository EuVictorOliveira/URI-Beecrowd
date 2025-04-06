#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int main(){
    string hamekame;
    int nTestes, qtdHame = 0, qtdKame = 0;


    cin >> nTestes;

    while(nTestes > 0){

        cin >> hamekame;

        for(int i = 0; hamekame[i] != 'm'; i++){
            if(hamekame[i] == 'a')
                qtdHame++;
        }

        int tamanho = hamekame.length();
        for(int i = 0; i < tamanho; i++){
            
            if(hamekame[i] == 'k'){
                for(int j = i; hamekame[j] != 'm'; j++){
                    if(hamekame[j] == 'a' )
                        qtdKame++;
                }

            }     
        }

        int total = qtdHame * qtdKame;

        cout << 'k';
        for(int i = 1; i < total; i++){
            cout << 'a';
            
        }

        cout << 'a' << endl;

        nTestes--;
        qtdHame = 0;
        qtdKame = 0;
    }


    return 0;

}