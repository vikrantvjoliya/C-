#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
 
 
 
int main(){
    int t;
    long long n;
    cin >> t;
    while(t--){
        cin >> n;
        long long sum = 1;
        for(int i = 1; i <= n * 2 - 1; i++){
            sum *= i;
            sum %= 1000000007;
        }
        sum *= n;
        sum %= 1000000007;
        cout << sum << endl;
    }
    return 0;
}
