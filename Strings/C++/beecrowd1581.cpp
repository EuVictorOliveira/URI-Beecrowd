#include <iostream>
#include <string>

using namespace std;

int main(void){
    int nTestes, nPessoas;
    string idioma, proxIdioma;
    bool mesmoIdioma;


    cin >> nTestes;

    while(nTestes > 0){
    
        cin >> nPessoas;

        cin >> idioma;
        mesmoIdioma = true;
        for(int i = 1; i < nPessoas; i++){

            cin >> proxIdioma;

            if(proxIdioma != idioma)
                mesmoIdioma = false;

        }

        if(mesmoIdioma)
            cout << idioma << endl;
        else
            cout << "ingles" << endl;


        nTestes--;

    }

    return 0;

}