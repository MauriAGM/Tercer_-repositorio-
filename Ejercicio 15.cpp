#include <iostream>
using namespace std;

int main() {
    int d;
    cout << "Ingrese numero de dia (0-6): ";
    cin >> d;
    if (d == 0) cout << "Domingo" << endl;
    else if (d == 1) cout << "Lunes" << endl;
    else if (d == 2) cout << "Martes" << endl;
    else if (d == 3) cout << "Miercoles" << endl;
    else if (d == 4) cout << "Jueves" << endl;
    else if (d == 5) cout << "Viernes" << endl;
    else if (d == 6) cout << "Sabado" << endl;
    else cout << "Dia invalido" << endl;
    return 0;
}
