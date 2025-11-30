#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::cin;

#define PI 3.14159

int main(){
    double raio;

    cin >> raio;

    double volume = 4.0/3.0 * PI * pow(raio,3);

    cout << "VOLUME = " << std::fixed << std::setprecision(3) << volume << std::endl;


    return 0;
}