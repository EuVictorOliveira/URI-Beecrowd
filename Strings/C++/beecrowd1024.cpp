#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int nLinhas;
    cin >> nLinhas;
    cin.ignore();

    while (nLinhas--) {
        string texto;
        getline(cin, texto);

        int tamanho = texto.length();

        for (int i = 0; i < tamanho; i++) {
            if ( (texto[i] >= 'A' && texto[i] <= 'Z') ||
                 (texto[i] >= 'a' && texto[i] <= 'z') )
            {
                texto[i] += 3;
            }
        }

        reverse(texto.begin(), texto.end());

        int metade = tamanho / 2;
        for (int i = metade; i < tamanho; i++) {
            texto[i] -= 1;
        }

        cout << texto << endl;
    }

    return 0;
}