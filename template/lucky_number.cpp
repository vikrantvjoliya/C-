#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a,b,c;
    cin >> n;
    while(n--){
        cin>>a>>b>>c;
        if(a==7 || b==7 || c==7){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
   return 0;
}

