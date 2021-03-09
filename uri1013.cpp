#include <iostream>
#include <cstdlib>
#include <typeinfo>
using namespace std;
 
int main() {
 	int a;
 	int b;
 	int c;
 	int MaiorAB;
 	
	cin >> a >> b >> c;
	
	MaiorAB = (a + b + abs(a-b))/2;
	
	if (MaiorAB > c){
		cout << MaiorAB << " eh o maior" << endl;
	} else {
		cout << c << " eh o maior" << endl;
	}
 
    return 0;
}
