#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

typedef struct ponto{
    double x;
    double y;
} Ponto;

double distancia(Ponto, Ponto);

int main(){
    Ponto a, b;

    cin >> a.x >> a.y;
    cin >> b.x >> b.y;
    
    double resultado = distancia(a,b);

    cout << std::fixed << std::setprecision(4) << resultado << endl;


    return 0;
}

double distancia(Ponto a, Ponto b){

    return sqrt(pow(b.x-a.x,2) + pow(b.y-a.y,2));

}