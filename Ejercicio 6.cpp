#include <iostream>
using namespace std;

int main() {
    float promedio, pension, total;
    cout << "Ingrese promedio y pension: ";
    cin >> promedio >> pension;
    if (promedio >= 18)
        total = pension * 0.7;
    else
        total = pension * 1.18;
    cout << "Monto a pagar: " << total << endl;
    return 0;
}
