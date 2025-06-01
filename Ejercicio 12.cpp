#include <iostream>
using namespace std;

int main() {
	int repeticiones;
    float x, fx;
    cout << "Cuantos valores de x desea evaluar: ";
    cin >> repeticiones; 
    for (int i = 1; i <= repeticiones; i++){
    	cout << "Ingrese el valor de x " << i << ": ";
    	cin >> x;
    	if (x < 0)
        	fx = x * x + 2 * x + 3;
    	else if (x == 0)
        	fx = 0;
    	else
        fx = x * x + 2 * x - 3;
        cout << "f(x) = " << fx << endl;
	}
    return 0;
}
