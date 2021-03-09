#include <iostream>
 
using namespace std;
 
int main() {
	int numero, contador, par;
	
	for (contador = 0; contador <= 4; contador++){
		cin >> numero;
		if (numero%2 == 0){
			par = par + 1;
		}
	}	
	
	cout << par << " valores pares";
	
 
    return 0;
}
