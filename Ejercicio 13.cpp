#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cout << "Ingrese tres longitudes: ";
    cin >> a >> b >> c;
    if (a < b + c && b < a + c && c < a + b)
        cout << "Forman un triangulo" << endl;
    else
        cout << "No forman un triangulo" << endl;
    return 0;
}
