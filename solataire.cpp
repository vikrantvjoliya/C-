#include<bits/stdc++.h>
using namespace std;

void solve()
{	
	string str;
	cin >> str;
   char a = 'A';
   int x = 0;
   char b = 'B';
   int y = 0;
   char c = 'C';
   int z = 0;
   
   for(int i = 0; str[i] != '\0'; i++) {
      if(str[i] == a)
      x++;
   }
   for(int i = 0; str[i] != '\0'; i++) {
      if(str[i] == b)
      y++;
   }
   for(int i = 0; str[i] != '\0'; i++) {
      if(str[i] == c)
      z++;
   }
   if(x+z==y) {
   	cout << "YES";
   }
   else {
   	cout << "NO";
   }
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	while(t--)
	{
		solve();
		cout<<"\n";
	}

	cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
	return 0;
}



/*


#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
void code()
{
    ss s;
    cin>>s;
    nn a=0,b=0,c=0;
    for(nn i=0;i<s.size();i++)
    {
        if(s[i]=='A') a++;
        else if(s[i]=='B') b++;
        else c++;
    }
    if(b==(a+c) && b!=0) cout<<"YES"<<nl;
    else cout<<"No"<<nl;
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}


*/