#include <iostream>
using namespace std;

int main() {
    int edad;
    char sexo;
    float pulsaciones;
    cout << "Ingrese edad: ";
	cin >> edad;
	cout << "Ingrese sexo (M/F): ";
    cin >> sexo;
    if (edad > 0 && (sexo == 'F' || sexo == 'f' || sexo == 'M' || sexo == 'm')){
    	if (sexo == 'F' || sexo == 'f')
    	    pulsaciones = (220 - edad) / 10.0;
   	 	else
     	   	pulsaciones = (210 - edad) / 10.0;
			cout << "Pulsaciones: " << pulsaciones << endl;
	} else {
		cout << "Datos invalidos " << endl;
	}
    return 0;
}
