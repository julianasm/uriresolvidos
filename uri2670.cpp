#include <iostream>
 
using namespace std;
 
int main() {
    int A1;
    int A2;
    int A3;
    int minutos;
    
	
	cin >> A1 >> A2 >> A3;
	
	if ((A1 > A2) && (A1 > A3)){
		minutos = (A1 * 0) + (A2 * 2) + (A3 * 2);
		cout << minutos;
	}
	else if ((A2 > A3) && (A2 > A1)){
		minutos = (A1 * 2) + (A2 * 0) + (A3 * 2);
		cout << minutos << endl;
	}	
	else ((A3 > A2) && (A3 > A1));{
		minutos = (A1 * 2) + (A2 * 0) + (A3 * 2);
		cout << minutos << endl;
	}
				
	return 0;

    
}

/* o andar que tem mais funcionarios é o andar que a ma
quina de cafe deve ficar, cada funcionario leva a mesma 
quantidade de tempo para subir e descer.
ex: ir pegar o cafe no 3 andar saindo do 1o leva 4 minutos
(subir 2 andares: 2 minutos, descer 2 andares: 2 minutos*/
