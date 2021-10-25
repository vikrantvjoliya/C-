#include <iostream>
#include <bits/stdc++.h>
#include<vector>
#include <iterator>
#define ll long long
using namespace std;
#define allsort(a) sort(a.begin(), a.end())
template<typename T>
void print(std::vector<T> const &v)
{
    for (auto &i: v) {
        std::cout << i << ' ';
    }
 
    std::cout << std::endl;
}
void solve(); 
                
int main(){
    ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
            cout<<fixed;
            cout<<setprecision(10);
    //        freopen("timber_input.txt", "r", stdin);
    //        freopen("timber_output.txt", "w", stdout);
            int t=1;
            cin>>t;
            for(int i=1;i<=t;i++){
            //    cout<<"Case #"<<i<<": ";  
                solve();
    }
    return 0;
}

void solve(){
	int n,v,b;
	cin>>n>>v>>b;
	// cout<<a<<2*b<<3*c<<endl;
	
	// cout<<abs((a+2*b)-(3*c))<<endl;
	if(n==b && v==b){
		cout<<0<<endl;	
	}
	else{
			int t=n+2*v+3*b;
		    int ag=(n+2*v+3*b)/2;
		    int re=(t-ag);
			cout<<abs(re-ag)<<endl;	
	}
		
}

/*
if(((n+2*v+3*b)%2==0)){
		cout<<0<<endl;	
	}
	else
		cout<<1<<endl;	


*/