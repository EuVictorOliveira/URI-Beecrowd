#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
    string nome, comparar = "zelda";

   
    cin >> nome;
   
    int tamanho = nome.length();
    for(int i = 0; i < tamanho; i++)
        nome[i] = tolower(nome[i]);

    if(nome.find(comparar) != string::npos )
        cout << "Link Bolado" << endl;
    else
        cout << "Link Tranquilo" << endl;



    return 0;

}