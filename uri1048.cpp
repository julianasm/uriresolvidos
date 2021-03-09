#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 	float salario, salario_final, reajuste, porcentagem;
 	
 	cin >> salario;
 	cout << fixed;
 	cout << setprecision(2);
 	
 	if (salario > 0 && salario <= 400.00){
 		reajuste = salario * 0.15;
 		salario_final = salario + (salario * 0.15);
 		cout << "Novo salario: " << salario_final << endl;
 		cout << "Reajuste ganho: " << reajuste << endl;
 		cout << "Em porcentagem: 15%" << endl;
	 } else if (salario >= 400.01 && salario <= 800.00){
	 	reajuste = salario * 0.12;
 		salario_final = salario + (salario * 0.12);
 		cout << "Novo salario: " << salario_final << endl;
 		cout << "Reajuste ganho: " << reajuste << endl;
 		cout << "Em porcentagem: 12%" << endl;
	 } else if (salario >= 800.01 && salario <= 1200.00){
	  	reajuste = salario * 0.10;
 		salario_final = salario + (salario * 0.10);
 		cout << "Novo salario: " << salario_final << endl;
 		cout << "Reajuste ganho: " << reajuste << endl;
 		cout << "Em porcentagem: 10%" << endl;	
	 } else if (salario >= 1200.01 && salario <= 2000.00){
	 	reajuste = salario * 0.07;
 		salario_final = salario + (salario * 0.07);
 		cout << "Novo salario: " << salario_final << endl;
 		cout << "Reajuste ganho: " << reajuste << endl;
 		cout << "Em porcentagem: 7%" << endl;
	 } else if (salario > 2000.00){
	 	reajuste = salario * 0.04;
 		salario_final = salario + (salario * 0.04);
 		cout << "Novo salario: " << salario_final << endl;
 		cout << "Reajuste ganho: " << reajuste << endl;
 		cout << "Em porcentagem: 4%" << endl;
	 }
 		
 
    return 0;
}
