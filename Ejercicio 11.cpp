#include <iostream>
using namespace std;

int main() {
    int q, r, s;
    cout << "Ingrese q, r y s: ";
    cin >> q >> r >> s;
    if (q % r == 0 && q % s == 0)
        cout << "q es multiplo de r y s" << endl;
    else
        cout << "q no es multiplo de r y s" << endl;
    return 0;
}
