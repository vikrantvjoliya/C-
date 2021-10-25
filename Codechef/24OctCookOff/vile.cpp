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
int solve(); 
                
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

int solve(){
	ll a,x=0;
	//ll c=2*pow(10,8);
	cin>>a;
	// if(a<3){
	// 	cout<<1<<endl;
	// }
	// else{
	// 	a=a-1;
	// 	x=(a*a)-a +1;
	// 	cout<<a<<endl;
	// }
	cout<<(a-2)*(a-1)+1<<endl;
}