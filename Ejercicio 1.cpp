#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3, promedio;
    cout << "Ingrese las tres calificaciones: ";
    cin >> n1 >> n2 >> n3;
    promedio = (n1 + n2 + n3) / 3;
    if (promedio >= 70)
        cout << "Aprueba" << endl;
    else
        cout << "Reprueba" << endl;
    return 0;
}
