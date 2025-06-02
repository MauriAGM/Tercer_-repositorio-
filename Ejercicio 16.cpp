#include <iostream>
using namespace std;

int main() {
    int tipo;
    float credito, nuevo;
    cout << "Ingrese tipo de tarjeta (1,2,3 u otro): ";
    cin >> tipo;
    if (tipo < 1) {
    	cout << "Tipo no valido. Se aplicara aumento por defecto(50%) " << endl;
	}
	cout << "Ingrese credito actual: ";
	cin >> credito;
	if (credito < 0){
		cout << "Credito invalido. Debe ser mayor o igual a 0 " << endl;
		return 1;
	}
    if (tipo == 1)
        nuevo = credito * 1.25;
    else if (tipo == 2)
        nuevo = credito * 1.35;
    else if (tipo == 3)
        nuevo = credito * 1.40;
    else
        nuevo = credito * 1.50;
    cout << "Nuevo credito: " << nuevo << endl;
    return 0;
}
