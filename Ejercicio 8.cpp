#include <iostream>
using namespace std;

int main() {
    char r;
    cout << "Colon descubrio America (S/N): ";
    cin >> r;
    if (r == 'S' || r == 's') {
        cout << "El lago Titicaca es el mas alto del mundo (S/N): ";
        cin >> r;
        if (r == 'S' || r == 's') {
            cout << "El espaniol es el unico idioma oficial de Peru (S/N): ";
            cin >> r;
            if (r == 'N' || r == 'n')
                cout << "Ganaste." << endl;
            else
                cout << "Perdiste." << endl;
        } else
            cout << "Perdiste." << endl;
    } else
        cout << "Perdiste." << endl;
    return 0;
}
