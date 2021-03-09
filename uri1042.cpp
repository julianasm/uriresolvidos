#include <iostream>

using namespace std;

int main(){
	int N1, N2, N3, maior, menor;
	
	cin >> N1 >> N2 >> N3;

	if (N1 > N2 && N1 > N3){
		maior = N1;
		if (N2 > N3){
			menor = N3;
			cout << menor << endl;
			cout << N2 << endl;
			cout << maior << endl;
			cout << endl;
			cout << N1 << endl;
			cout << N2 << endl;
			cout << N3 << endl;			
		} else if (N3 > N2){
			menor = N2;
			cout << menor << endl;
			cout << N3 << endl;
			cout << maior << endl;
			cout << endl;
			cout << N1 << endl;
			cout << N2 << endl;
			cout << N3 << endl;
		}
	} else if (N2 > N1 && N2 > N3){
		maior = N2;
		if (N1 > N3){
			menor = N3;
			cout << menor << endl;
			cout << N1 << endl;
			cout << maior << endl;
			cout << endl;
			cout << N1 << endl;
			cout << N2 << endl;
			cout << N3 << endl;
		} else if (N3 > N1){
			menor = N1;
			cout << menor << endl;
			cout << N3 << endl;
			cout << maior << endl;
			cout << endl;
			cout << N1 << endl;
			cout << N2 << endl;
			cout << N3 << endl;
		}
	} else if (N3 > N1 && N3 > N2){
		maior = N3;
		if (N2 > N1){
			menor = N1;
			cout << menor << endl;
			cout << N2 << endl;
			cout << maior << endl;
			cout << endl;
			cout << N1 << endl;
			cout << N2 << endl;
			cout << N3 << endl;
		} else if (N1 > N2){
			menor = N2;
			cout << menor << endl;
			cout << N1 << endl;
			cout << maior << endl;
			cout << endl;
			cout << N1 << endl;
			cout << N2 << endl;
			cout << N3 << endl;
		}
	}
	
	

	
	
	
}
