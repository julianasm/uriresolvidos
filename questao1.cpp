// geração do sec XX

#include <iostream>
using namespace std;
	
int main(){
	int ano_nascimento;
	
	cin >> ano_nascimento;
	
	// valida se o ano inserido é maior que zero
	// caso nao seja, o ano é considerado invalido e o script é encerrado
	if (ano_nascimento < 0){
		return 0;
	}
	
	// verifica se o ano inserida se encontra em algum intervalo VALIDO abaixo
	if (ano_nascimento >= 1901 && ano_nascimento <= 1924){
		cout << "Gracao Grandiosa" << endl;
	} else if (ano_nascimento >= 1925 && ano_nascimento <= 1945){
		cout << "Geracao Silenciosa" << endl;
	} else if (ano_nascimento >= 1945 && ano_nascimento <= 1964){
		cout << "Baby Boomers" << endl;
	} else if (ano_nascimento >= 1965 && ano_nascimento <= 1979){
		cout << "Geracao X" << endl;
	} else if (ano_nascimento >= 1980 && ano_nascimento <= 1995){
		cout << "Millenials" << endl;
	} else {
		cout << "SEM CLASSIFICACAO" << endl;
	}
}

