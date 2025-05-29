#include <iostream>
using namespace std;

int main() {
    int camisas;
    float precio, total;
    cout << "Ingrese el numero de camisas y el precio unitario: ";
    cin >> camisas >> precio;
    if (camisas >= 3)
        total = camisas * precio * 0.8;
    else
        total = camisas * precio * 0.9;
    cout << "Total a pagar: " << total << endl;
    return 0;
}
