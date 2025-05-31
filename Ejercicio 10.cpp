#include <iostream>
using namespace std;

int main() {
    int anio;
    cout << "Ingrese el anio: ";
    cin >> anio;
    if (anio <= 0) {
    	cout << "Anio invalido." << endl;
        return 1;
	}
	
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0))
        cout << "Es bisiesto" << endl;
    else
        cout << "No es bisiesto" << endl;
    return 0;
    
}
