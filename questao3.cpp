#include <iostream>
#include <cmath>

using namespace std;


// equacao quadratica;
int main(){
	float a, b, c, x1, x2, delta;
	
	//input dos valores a, b e c
	cin >> a >> b >> c;
	
	// valida se a é diferente de 0;
	if (a == 0){
		return 0;
	}
	
	// calculo do delta
	delta = (b * b) - (4 * a * c);
	
	// calculo das raízes
	x1 = (-b + sqrt(delta))/(2 * a);
	x2 = (-b - sqrt(delta))/(2 * a);
	
	// verificacao dos valores de delta
	if (delta < 0){
		cout << "NAO HA SOLUCAO REAL" << endl;
	} else if (delta == 0){
		cout << "DUAS SOLUCOES IGUAIS" << endl;
		cout << "x = " << x1;
	} else if (delta > 0){
		cout << "DUAS SOLUCOES DISTINTAS" << endl;
		cout << "x1 = " << x1 << " e x2 = " << x2;
	}
		
}
