#include <iostream>
using namespace std;

int main() {
    float x, fx;
    cout << "Ingrese valor de x: ";
    cin >> x;
    if (x < 0)
        fx = x * x + 2 * x + 3;
    else if (x == 0)
        fx = 0;
    else
        fx = x * x + 2 * x - 3;
    cout << "f(x) = " << fx << endl;
    return 0;
}
