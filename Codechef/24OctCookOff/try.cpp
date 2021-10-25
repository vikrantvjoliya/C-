#include <iostream>
#include <bits/stdc++.h>
#include<vector>
#include <iterator>
// #define ll long long
#define int long long int
using namespace std;
#define allsort(a) sort(a.begin(), a.end())
//const int N = 1e5+10;

void solve(); 
                
signed main(){
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

int query(int x){
    cout << "?" << x<<endl;
    int y;
    cin>>y;
    return y;
}

inline void solve(){
    int n;
    int x1 = 1e18;
    int y1=query(x1);
    // cin>>x1;
    int x2=x1-y1-1;
    int y2=query(x2);
    cout <<"!"<<y2+1<<endl;
}

    // int a[n];
    //int pf[N];
    //Ntotal slipper L left X Price
    //string str;
    //cin>>str;
    // cout << a<<" "<<b<<" "<<c<<endl;
    // for(int i=0; i<n; i++){
    //     cin >> a[i] ;
    //   }
    // cout <<0*a[0]<<endl;

        // pf[i] = pf[i-1] + a[i];