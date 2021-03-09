#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 double A;
 double n = 3.14159;
 double raio;
 
 cin >> raio;
 
 
 A = n * (raio * raio);
 
 cout << setprecision(4) << fixed;
 cout << "A=" << A << endl;

 
    return 0;
}
