#include<bits/stdc++.h>
#include <cmath>
using namespace std;
int convertBinary(long long n){
	int i = 0,bin = 0,rem=0,c;
	while (n!=0){
		rem=n%2;
		c=pow(10,i);
        bin+=rem*c;
        n/=2;
        i+=1;
	}
	return bin;
}

int main(){
	long long x=9;
	//cout << x << cin;
	cout << "Number of Digits: "<< convertBinary(x);
	return 0;
}