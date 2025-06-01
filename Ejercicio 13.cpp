#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cout << "Ingrese tres longitudes: ";
    cin >> a >> b >> c;
    if (a > 0 && b > 0 && c > 0){
    	if (a < b + c && b < a + c && c < a + b)
        	cout << "Forman un triangulo" << endl;
   	 	else
        	cout << "No forman un triangulo" << endl;
	} else {
		cout << "Las longitudes deben ser mayores que 0" << endl;
	}
    	return 0;
	}
