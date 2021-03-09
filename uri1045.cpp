#include <iostream>
#include <cmath> 
using namespace std;
 
int main() {
 	float N1, N2, N3;
 	float A, B, C;
 	
 	cin >> N1 >> N2 >> N3;
 	
 	if(N1 > 0 && N2 > 0 && N3 > 0){
	 if (N1 >= N2 && N1 >= N3){
 		A = N1;
 		B = N2;
 		C = N3;
	 } else if (N2 >= N3 && N2 >= N1){
	 	A = N2;
	 	B = N1;
	 	C = N3;
	 } else if (N3 >= N1 && N3 >= N2){
	 	A = N3;
	 	B = N1;
	 	C = N2;
	 }	
} else {
	return(0);
}

	
	 
	if (A >= (B + C)){
		cout << "NAO FORMA TRIANGULO" << endl;
		return(0);
	}
	
	if ((A * A) == ((B * B) + (C * C))){
		cout << "TRIANGULO RETANGULO" << endl;
	}
	
	if ((A * A) > ((B * B) + (C * C))){
		cout << "TRIANGULO OBTUSANGULO" << endl;
	} 
	
	if ((A * A) < ((B * B) + (C * C))){
		cout << "TRIANGULO ACUTANGULO" << endl;
	}
 	
 	if (A == B && A == C){
		cout << "TRIANGULO EQUILATERO" << endl;
	}
	
	if ((A == B) && (A != C)) { 
		cout << "TRIANGULO ISOSCELES" << endl;
	} else if ((B == C) && (B != A)) {
		cout << "TRIANGULO ISOSCELES" << endl; 
	}  else if ((A == C) && (B != A)) {
	    cout << "TRIANGULO ISOSCELES" << endl; 
	}
 	
    return 0;
}
