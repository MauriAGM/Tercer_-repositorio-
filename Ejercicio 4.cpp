#include <iostream>
using namespace std;

int main() {
    float compra, total;
    int numero;
    cout << "Ingrese el monto de la compra: ";
	cin >> compra;
	cout << "Ingrese el numero aleatorio: ";
    cin >> numero;
    if (compra > 0 && numero >= 0 && numero <=100){
    	if (numero < 74){
    		total = compra * 0.85;
		}else{
        	total = compra * 0.8;
    		cout << "Total con descuento: " << total << endl;
		}	
	} else {
		cout << "Datos invalidos" << endl;
	}
	return 0;
}
