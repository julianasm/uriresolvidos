#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
	float cachorro = 400;
	float xsalada = 450;
	float xbacon = 500;
	float torrada = 200;
	float refri = 150;
	int codigo;
 	int quantidade;
 	float total;
 	
 	cin >> codigo;
 	cin >> quantidade;
 	
 	if (codigo == 1){
 		total = (cachorro * quantidade)/100;
 		cout << setprecision(2) << fixed;
 		cout << "Total: R$ " << total << endl;
	 } else if (codigo == 2){
	 	total = (xsalada * quantidade)/100;
 		cout << setprecision(2) << fixed;
 		cout << "Total: R$ " << total << endl;
	 } else if (codigo == 3){
	 	total = (xbacon * quantidade)/100;
 		cout << setprecision(2) << fixed;
 		cout << "Total: R$ " << total << endl;
	 } else if (codigo == 4){
	 	total = (torrada * quantidade)/100;
 		cout << setprecision(2) << fixed;
 		cout << "Total: R$ " << total << endl;
	 } else if (codigo == 5){
	 	total = (refri * quantidade)/100;
 		cout << setprecision(2) << fixed;
 		cout << "Total: R$ " << total << endl;
	 }
 
    return 0;
}
