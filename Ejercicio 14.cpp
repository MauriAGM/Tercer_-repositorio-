#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero (1-5): ";
    cin >> n;
    if (n == 1) cout << "A" << endl;
    else if (n == 2) cout << "E" << endl;
    else if (n == 3) cout << "I" << endl;
    else if (n == 4) cout << "O" << endl;
    else if (n == 5) cout << "U" << endl;
    else cout << "No es vocal" << endl;
    return 0;
}
