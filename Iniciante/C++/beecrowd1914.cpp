#include <iostream>

using namespace std;

int main(){
    int QT, N, M;
    string jogador1, jogador2, jogada1, jogada2;

    cin >> QT;

    for(int i = 0; i < QT; i++){
        cin >> jogador1 >> jogada1 >> jogador2 >> jogada2;
        cin >> N >> M;

        string ganhou;

        if( (N + M) % 2 == 0)
            ganhou = "PAR";
        else
            ganhou = "IMPAR";

        if(jogada1 == ganhou)
            cout << jogador1 << endl;
        else
            cout << jogador2 << endl;


    }

    return 0;
}