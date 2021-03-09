#include <iostream>
 
using namespace std;
 
int main() {
	int numero, contador, quadrado;
	cin >> numero;
	
	for (contador = 1; contador <= numero; contador++){
		if (contador%2 == 0){
			quadrado = (contador * contador);
			cout << contador << "^" << contador << " = " << quadrado << endl;
		}
	}
	
 
    return 0;
}
