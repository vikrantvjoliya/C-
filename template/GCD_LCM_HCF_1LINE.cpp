#include <iostream> 
#include <algorithm>  
  
using namespace std; 
  
int main() 
{ 	
	int a = 18;
	int b = 21;
	
       cout << "HCF = " << __gcd(a, b) << "\n"; 
	// cout << __gcd(18.0, 21) .................This causes error because no typecasting occurs
	cout << "LCM = " << (a*b)/__gcd(a, b);
} 