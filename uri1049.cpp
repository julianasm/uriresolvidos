#include <iostream>
#include <vector>


 
using namespace std;
 
int main() {
	string item1, item2, item3;

 	cin >> item1;
 	cin >> item2;
 	cin >> item3;
 	
	if (item1 == "vertebrado"){
		if (item2 == "ave"){
			if (item3 == "carnivoro"){
				cout << "aguia" << endl;
			} else if (item3 == "onivoro"){
				cout << "pomba" << endl;
			}
		} else if (item2 == "mamifero"){
			if (item3 == "onivoro"){
				cout << "homem" << endl;
			} else if (item3 == "herbivoro"){
				cout << "vaca" << endl;
			}
		}
	}
 	
	if (item1 == "invertebrado"){
		if (item2 == "inseto"){
			if (item3 == "hematofago"){
				cout << "pulga" << endl;
			} else if (item3 == "herbivoro"){
				cout << "lagarta" << endl;
			}
		} else if (item2 == "anelideo"){
			if (item3 == "hematofago"){
				cout << "sanguessuga" << endl;
			} else if (item3 == "onivoro"){
				cout << "minhoca" << endl;
			}
		}
	}	
 	
 	
 
    return 0;
}
