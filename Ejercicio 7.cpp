#include <iostream>
using namespace std;

int main() {
    int llantas;
    float precio;
    cout << "Ingrese cantidad de llantas: ";
    cin >> llantas;
    if (llantas < 5)
        precio = 300;
    else if (llantas <= 10)
        precio = 250;
    else
        precio = 200;
    cout << "Precio unitario: " << precio << endl;
    cout << "Total: " << precio * llantas << endl;
    return 0;
}

