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

int lps(string str)
{
	int n = str.size();

	int L[n][n];

	for (int i = 0; i < n; i++)
		L[i][i] = 1;
	for (int cl = 2; cl <= n; cl++)
	{
		for (int i = 0;
				i < n - cl + 1; i++)
		{
			int j = i + cl - 1;
			if (str[i] == str[j] &&
						cl == 2)
				L[i][j] = 2;
			else if (str[i] == str[j])
				L[i][j] = L[i + 1][j - 1] + 2;
			else
				L[i][j] = max(L[i][j - 1],
							L[i + 1][j]);
		}
	}

	return L[0][n - 1];
}

int minimumNumberOfDeletions(string str)
{
	int n = str.size();

	int len = lps(str);

	return (n - len);
}

void solve(){
	int a,b;
	cin >> a;
	string str;
	cin>>str;
// string str = "rprarlap";
	cout << minimumNumberOfDeletions(str)<<endl;

}