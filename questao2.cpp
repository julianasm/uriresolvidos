#include <iostream>

using namespace std;
int main(){
	int id;
	
	// input do id
	cin >> id;
	
	// verifica se o valor de id se enquadra em algum dos casos abaixo
	switch (id){
		case 10:
			cout << "-----------------------" << endl;
			cout << "id: " << id << endl;
			cout << "ocupacao: engenheiro de redes" << endl;
			cout << "idade: 28" << endl;
			cout << "tipo sanguineo: A+" << endl;
			cout << "doenca cronica: SIM" << endl;
			cout << "-----------------------" << endl;
			break;
		case 11:
			cout << "-----------------------" << endl;
			cout << "id: " << id << endl;
			cout << "ocupacao: designer" << endl;
			cout << "idade: 22" << endl;
			cout << "tipo sanguineo: A+" << endl;
			cout << "doenca cronica: SIM" << endl;
			cout << "-----------------------" << endl;
			break;	
		case 12:
			cout << "-----------------------" << endl;
			cout << "id: " << id << endl;
			cout << "ocupacao: analista industrial" << endl;
			cout << "idade: 35" << endl;
			cout << "tipo sanguineo: AB-" << endl;
			cout << "doenca cronica: NAO" << endl;
			cout << "-----------------------" << endl;
			break;
		case 20:
			cout << "-----------------------" << endl;
			cout << "id: " << id << endl;
			cout << "ocupacao: programador" << endl;
			cout << "idade: 30" << endl;
			cout << "tipo sanguineo: O+" << endl;
			cout << "doenca cronica: NAO" << endl;
			cout << "-----------------------" << endl;
			break;
		case 21:
			cout << "-----------------------" << endl;
			cout << "id: " << id << endl;
			cout << "ocupacao: designer" << endl;
			cout << "idade: 40" << endl;
			cout << "tipo sanguineo: A-" << endl;
			cout << "doenca cronica: SIM" << endl;
			cout << "-----------------------" << endl;
			break;
		case 22:
			cout << "-----------------------" << endl;
			cout << "id: " << id << endl;
			cout << "ocupacao: engenheiro de redes" << endl;
			cout << "idade: 25" << endl;
			cout << "tipo sanguineo: B-" << endl;
			cout << "doenca cronica: NAO" << endl;
			cout << "-----------------------" << endl;
			break;
		case 23:
			cout << "-----------------------" << endl;
			cout << "id: " << id << endl;
			cout << "ocupacao: programador" << endl;
			cout << "idade: 52" << endl;
			cout << "tipo sanguineo: AB-" << endl;
			cout << "doenca cronica: NAO" << endl;
			cout << "-----------------------" << endl;
			break;
		case 24:
			cout << "-----------------------" << endl;
			cout << "id: " << id << endl;
			cout << "ocupacao: programador" << endl;
			cout << "idade: 27" << endl;
			cout << "tipo sanguineo: O+" << endl;
			cout << "doenca cronica: NAO" << endl;
			cout << "-----------------------" << endl;
			break;
		
		// caso nao seja encontrado nenhum id, o caso default é utilizado
		default:
			cout << "Voluntario nao encontrado." << endl;
	} 
	
	
}
