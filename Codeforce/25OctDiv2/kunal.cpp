#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
using namespace chrono;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

#ifdef Priyansh31dec
#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

void solve();

int main() {
#ifdef OOKUNDI
	freopen("Error.txt", "w", stderr);
#endif
	fastio();
	auto start1 = high_resolution_clock::now();
	solve();
	auto stop1 = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef OOKUNDI
	cerr << "Time: " << duration . count() / 1000 << endl;
#endif
}
string kunOCC(string& s, char ch)
{
    for (int i = 0; s[i]; i++) {
        if (s[i] == ch) {
            s.erase(s.begin() + i);
            break;
        }
    }
 
    return s;
}

void solve() {
 	int c;
 	cin >>c;
 	while(c--){
 	string s,m;
 	cin>>s;
 	m=s;
 	vector<char> k(s.begin(), s.end());
 	vector<char> t(m.begin(), m.end());
 	sort(k.begin(),k.end());
 	cout <<k[0]<<" "<<kunOCC(m,k[0]);
 	cout<<endl;	
 	}
}
    