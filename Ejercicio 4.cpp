#include <iostream>
using namespace std;

int main() {
    float compra, total;
    int numero;
    cout << "Ingrese el monto de la compra y el numero aleatorio: ";
    cin >> compra >> numero;
    if (numero < 74)
        total = compra * 0.85;
    else
        total = compra * 0.8;
    cout << "Total con descuento: " << total << endl;
    return 0;
}
