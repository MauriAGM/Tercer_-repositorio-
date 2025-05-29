#include <iostream>
using namespace std;

int main() {
    int tipo;
    float credito, nuevo;
    cout << "Ingrese tipo de tarjeta y credito actual: ";
    cin >> tipo >> credito;
    if (tipo == 1)
        nuevo = credito * 1.25;
    else if (tipo == 2)
        nuevo = credito * 1.35;
    else if (tipo == 3)
        nuevo = credito * 1.40;
    else
        nuevo = credito * 1.50;
    cout << "Nuevo credito: " << nuevo << endl;
    return 0;
}
