#include <iostream>
using namespace std;

int main() {
    int camisas;
    float precio, total;
    cout << "Ingrese el numero de camisas: ";
    cin >> camisas;
	cout << "Ingrese el precio unitario: ";
    cin >> precio;
    if (camisas > 0 && precio > 0) {
		if (camisas >= 3)
        	total = camisas * precio * 0.8;
    	else
        	total = camisas * precio * 0.9;
    		cout << "Total a pagar: " << total << endl;	
	} else {
		cout << "Cantidad o precio invalido" << endl;
	}
    return 0;
}
