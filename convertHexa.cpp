#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void decToHexa(int a){
	char hexaDecimal[100];
	int i = 0;
	while(a !=0){
		int temp = 0;
		temp=a % 16;
		
		if(temp < 10){
			hexaDecimal[i]=temp + 48;
			i++;
		}
		else{
			hexaDecimal[i]=temp + 55;
			i++;
		}
		a/=16;
	}
	for(int j=i-1; j>=a;j--){
		cout << hexaDecimal[j];
	}
}

int main(){
    int n ;
	cin >> n;
	//cout << n << endl;
    decToHexa(n);
    return 0;
}