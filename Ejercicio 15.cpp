#include <iostream>
using namespace std;

int main() {
    int d;
    cout << "Ingrese numero de dia (0-6): ";
    cin >> d;
    
    switch (d) {
    	case 0 : cout << "Domingo" << endl; break;
    	case 1 : cout << "Lunes" << endl; break;
    	case 2 : cout << "Martes" << endl; break;
    	case 3 : cout << "Miercoles" << endl; break;
    	case 4 : cout << "Jueves" << endl; break;
    	case 5 : cout << "Viernes" << endl; break;
    	case 6 : cout << "Sabado" << endl; break;
        default : cout << "Dia invalido" << endl; 
	}
    return 0;
}
