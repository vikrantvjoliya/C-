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
    int a,b,c;
    cin >>a>>b>>c;
    //Ntotal slipper L left X Price
    //string str;
    //cin>>str;
    // cout << a<<" "<<b<<" "<<c<<endl;
    if(c==0 || b==0 || a== 0)
        cout <<0<<endl;
    else if((a-b)>b)
        cout <<abs(b)*c<<endl;
    else
        cout <<abs(a-b)*c<<endl;

}

/*
input
4
0 0 100
10 1 0
1000 10 1000
10 7 1


output
0
0
10000
3

*/