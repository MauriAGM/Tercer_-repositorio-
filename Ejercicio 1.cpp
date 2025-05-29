#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3, promedio;
    cout << "Ingrese la primera calificacion (0 a 100): ";
    cin >> n1;
    if (n1 < 0 || n1 > 100) {
        cout << "Calificacion invalida." << endl;
        return 1;
    }
    cout << "Ingrese la segunda calificacion (0 a 100): ";
    cin >> n2;
    if (n2 < 0 || n2 > 100) {
        cout << "Calificacion invalida." << endl;
        return 1;
    }
    cout << "Ingrese la tercera calificacion (0 a 100): ";
    cin >> n3;
    if (n3 < 0 || n3 > 100) {
        cout << "Calificacion invalida." << endl;
        return 1;
    }
    promedio = (n1 + n2 + n3) / 3;

    if (promedio >= 70)
        cout << "Aprueba" << endl;
    else
        cout << "Reprueba" << endl;
    return 0;
}

