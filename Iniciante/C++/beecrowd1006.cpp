#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double A, B, C;

    cin >> A >> B >> C;
    cout << fixed << setprecision(1);

    double media = ((A*2) + (B*3) + (C*5)) / 10.0;

    cout << "MEDIA = " << media << endl;



    return 0;
}