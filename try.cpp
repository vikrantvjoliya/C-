#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
	int c=0,n;
	cin>>n;
	while(n!=0){
		n/=10;
		c++;
	}
	cout<<c;
}
