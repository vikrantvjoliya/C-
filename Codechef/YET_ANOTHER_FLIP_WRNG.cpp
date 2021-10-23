#include <iostream>
#include <bits/stdc++.h>
#include<vector>
#include <iterator>
#define ll long long
using namespace std;
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
    ll a,b,c=0,tmp=0,pr=0;
    int j;
    ll op=INT_MAX;
    cin>>a>>b;
    vector<int> v;
    v.clear();
    // cout<<a<< b <<"\n";
    int previous_term=1,total=0;
    while(previous_term<=b)
    {
    total=total+previous_term;
    previous_term=previous_term*2;
    c+=1;
    }
    if(b==0){
      cout<<"YES"<<"\n"<<0<<endl;
    }
    /*if(b%2==0 && b!=0){
        cout<<"NO"<<endl;
        }
    *//*if(b==5){
        cout<<"YES"<endl;
        cout<<2<<endl;
        cout<<5<<endl;
        cout<<1<<endl;

    }*/
    else if(ceil(log2(b+1)) == floor(log2(b+1)))
    {
            cout<<"YES"<<"\n"<<c<<endl;
            for(int j=1;j<=c;j++)
                tmp+=pow(2,j-1);
                cout<<tmp<<endl;
            for(int i = 1; i <c; i++) {
                tmp = tmp - pow(2,i);
                cout<< tmp<<endl;
                }
             // for(int i = 1; i< c; i++) {
             //    pr = pr + pow(2,i-1);
             //    cout<< pr<<endl;
             //    }
    }
    else
        cout<<"NO"<<endl;

}

    // else if(b!=0){
            //if(b==c)
                // break; 
            //   cout<<c<<endl;//int((pow(2,i)))

            // else


/*    else if (b%2!=0){
      double i=log2(b+1);
      int j=(int)i;
      if((i-j)==0){
       cout<<"YES"<<endl;
       for(j=0;j<i;j++)
        cout<<int(pow(2,j))<<endl;
      }
     }*/
    /*else{
       cout<<"NO"<<endl;
      }*/

    /*vector<int> v(a);
    v.clear();
    size_t const half_size = v.size() / 2;
        while((cin>>b)){
            v.push_back(b);
            if(v.size()==a)
                break;
        }
    sort(v.begin(), v.end());*/