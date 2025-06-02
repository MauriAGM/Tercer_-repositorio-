#include <iostream>
using namespace std;

int main() {
    float promedio, pension, total;
    cout << "Ingrese promedio: ";
	cin >> promedio;
	cout << "Ingrese pension: ";
    cin >> pension;
    if(promedio >= 0 && pension >=0 ){
    	if (promedio >= 18)
        	total = pension * 0.7;
    	else
        	total = pension * 1.18;
    		cout << "Monto a pagar: " << total << endl;
	} else {
		cout << "Datos invalidos" << endl;
	}
    return 0;
}
