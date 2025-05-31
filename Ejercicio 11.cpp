#include <iostream>
using namespace std;

int main() {
    int q, r, s;
    cout << "Ingrese q: ";
    cin >> q; 
    cout << "Ingrese r: ";
    cin >> r;
    cout << "Ingrese s: ";
    cin >> s;
    
    if ( r == 0 || s == 0 ) {
    	cout << "No se puede dividir entre cero" << endl;
    	return 1;
	}
    if (q % r == 0 && q % s == 0)
        cout << "q es multiplo de r y s" << endl;
    else
        cout << "q no es multiplo de r y s" << endl;
    return 0;
}
