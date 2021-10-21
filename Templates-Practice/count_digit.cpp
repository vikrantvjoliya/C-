#include<bits/stdc++.h>
using namespace std;
int countDigits(long long n){
	int count =0;
	while (n!=0){
		n=n/10;
		++count;
	}
	return count;
}

int main(){
	long long x=993773;
	//cout << x << cin;
	cout << "Number of Digits: "<< countDigits(x);
	return 0;
}