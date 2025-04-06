#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int a, b, soma;
    char remover = '0';

   

    while(1){

        cin >> a >> b;

        if(a == 0 && b == 0)
            break;

        soma = a + b;

        string resultado = to_string(soma);

        resultado.erase(remove(resultado.begin(), resultado.end(), remover), resultado.end());

        cout << resultado << endl;

    }

    return 0;

}