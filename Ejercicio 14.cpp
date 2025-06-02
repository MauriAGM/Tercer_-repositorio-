#include <iostream>
using namespace std;

int main() {
    int n;
    char continuar;
    
    do {
    	cout << "Ingrese un numero (1-5): ";
		cin >> n;
		
		switch(n) {
    	case 1: cout << "A" << endl; break;
    	case 2: cout << "B" << endl; break;
    	case 3: cout << "C" << endl; break;
    	case 4: cout << "D" << endl; break;
    	case 5: cout << "E" << endl; break;
    	default: cout << "No es vocal" << endl;
		}
		
		cout << "Desea salir del programa(s/n): ";
		cin >> continuar;
	} while (continuar == 's' || continuar == 'S');

    return 0;
}
