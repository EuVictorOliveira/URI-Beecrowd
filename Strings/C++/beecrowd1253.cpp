#include <iostream>
#include <string>

using namespace std;

int main(){
    int nTestes, deslocamento;
    string palavra;

    cin >> nTestes;

    while(nTestes > 0){

        cin >> palavra;
        cin >> deslocamento;

        int tamanho = palavra.length();

        for(int i = 0; i <= tamanho; i++){
            palavra[i] = ((palavra[i] - deslocamento - 'A' + 26) % 26) + 'A';
        }

        cout << palavra << endl;

        nTestes--;
    }




    return 0;
}