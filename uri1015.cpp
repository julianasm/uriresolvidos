#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
 
int main() {
	float x1;
	float y1;
	float x2;
	float y2;
	float quadrado1;
	float quadrado2;
	float raiz;
	float distancia;
	
	cin >> x1 >> y1 >> x2 >> y2;
	quadrado1 = (x2 - x1) * (x2 - x1);
	quadrado2 = (y2 - y1) * (y2 - y1);
	distancia = sqrt(quadrado1 + quadrado2);
	
	cout << setprecision(4) << fixed;
	cout << distancia;
	
	 
    return 0;
}
