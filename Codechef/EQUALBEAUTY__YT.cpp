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
    ll a,b,c,a1=0,a2=0;
    ll op=INT_MAX;
    cin>>a;
    //cout<<a<<"\n";

    vector<int> v(a);
    v.clear();
    size_t const half_size = v.size() / 2;
        while((cin>>b)){
            v.push_back(b);
            if(v.size()==a)
                break;
        }
    sort(v.begin(), v.end());
    if (a == 2){
            cout << 0 << endl;
            // continue;
        }
    else if (a == 3){
            cout << min(abs(v[0] - v[1]), abs(v[1] - v[2])) << " 3 CASES"<<endl;
            // continue; 
        }
    else{
            for (int i = 0; i<a-1; i++)
                a1+=abs(v[i] - v[(a-1)/2]);
            for (int i = 1; i<a; i++)
                a2+=abs(v[i] - v[1+(a-1)/2]);
            //cout << min(a1,a2) << endl;
            op=min(a1,a2);
            ll l=1,r=a-2;
            while(l<r){
                ll d2=v[a-1]-v[l];
                ll d1=v[r]-v[0];
                op = min(op,abs(d1-d2));
                if(d1<d2)
                    l++;
                else
                    r--;
            }
                cout << min(op,op) << " >=4 CASES " << a<<endl;
            }

}


/*    int mi=*min_element(v.begin(), v.end());
    int mx=*max_element(v.begin(), v.end());
    int be=mx-mi;   
    cout << "Sorted" <<"\n";
    for (auto x : v)
        cout << x << " ";
        cout << "\nMin Element = "<< mi;
  
        cout << "\nMax Element = "<< mx;
        cout<< "\n Beauty = "<< be;
    cout<<endl;
    for (int i = 0;i<v.size(); i++){

    }*/




/*
std::vector<int> lines;
// fill
std::size_t const half_size = lines.size() / 2;
std::vector<int> split_lo(lines.begin(), lines.begin() + half_size);
std::vector<int> split_hi(lines.begin() + half_size, lines.end());*/


    /*int n = 2;
    int size = (v.size() - 1) / n + 1;
    std::vector<int> vec[size];
    for (int k = 0; k < size; ++k)
    {
        auto start_itr = std::next(v.cbegin(), k*n);
        auto end_itr = std::next(v.cbegin(), k*n + n);
 
        vec[k].resize(n);
 
        if (k*n + n > v.size())
        {
            end_itr = v.cend();
            vec[k].resize(v.size() - k*n);
        }
        std::copy(start_itr, end_itr, vec[k].begin());
    }
 
    for (int i = 0; i < size; i++) {
        print(vec[i]);
    }*/


/*



#include <iostream>
#include <bits/stdc++.h>
#include<vector>
#include <iterator>
#define ll long long
using namespace std;

void solve(); 
                
int main(){
    ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
            cout<<fixed;
            cout<<setprecision(10);
            int t=1;
            cin>>t;
            for(int i=1;i<=t;i++){
                solve();
    }
    return 0;
}

void solve(){
    ll a,b,c,a1=0,a2=0;
    ll op=INT_MAX;
    cin>>a;
    vector<int> v(a);
    v.clear();
    size_t const half_size = v.size() / 2;
        while((cin>>b)){
            v.push_back(b);
            if(v.size()==a)
                break;
        }
    sort(v.begin(), v.end());
    if (a == 2){
            cout << 0 << endl;
        }
    else if (a == 3){
            cout << min(abs(v[0] - v[1]), abs(v[1] - v[2]))<<endl;
        }
    else{
            for (int i = 0; i<a-1; i++)
                a1+=abs(v[i] - v[(a-1)/2]);
            for (int i = 1; i<a; i++)
                a2+=abs(v[i] - v[1+(a-1)/2]);
            op=min(a1,a2);
            ll l=1,r=a-2;
            while(l<r){
                ll d2=v[a-1]-v[l];
                ll d1=v[r]-v[0];
                op = min(op,abs(d1-d2));
                if(d1<d2)
                    l++;
                else
                    r--;
            }
                cout << min(op,op)<<endl;
            }

}






*/