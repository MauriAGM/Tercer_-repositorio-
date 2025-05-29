#include <iostream>
using namespace std;

int main() {
    int edad;
    char sexo;
    float pulsaciones;
    cout << "Ingrese edad y sexo (M/F): ";
    cin >> edad >> sexo;
    if (sexo == 'F' || sexo == 'f')
        pulsaciones = (220 - edad) / 10.0;
    else
        pulsaciones = (210 - edad) / 10.0;
    cout << "Pulsaciones: " << pulsaciones << endl;
    return 0;
}
