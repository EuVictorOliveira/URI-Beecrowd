#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int maior(int, int);

int main(void){
    int a, b, c;

    cin >> a >> b >> c;

    int passo1 = maior(a,b);

    cout << maior(passo1, c) << " eh o maior" << endl;


    return 0;
}

int maior(int a, int b){
    return (a + b + abs(a-b)) / 2;
}