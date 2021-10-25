

/*#include<bits/stdc++.h>
using namespace std;

void func(string s){
	int mxf = 0;
	int fre[26];
	char c='A';
	memset(fre, 0, sizeof(fre));
	for(int i=0;i<s.length();i++){
		fre[s[i]-'A']++;
		if(fre[s[i]-'A'] > mxf){
			mxf = fre[s[i]-'A'];
			c=s[i];
		}
	}
	cout<<mxf%10<<endl;
}
int main(){
	func("OILWELQPWEPWQQP");
	return 0;
}*/








/*#include<bits/stdc++.h>
using namespace std;
void func(string s){
	map<char, int> mp;
	mp['I'] = 1;
	mp['V'] = 5;
	mp['X'] = 10;
	mp['L'] = 50;
	int num = 0;
	for(int i=0;i<s.size();i++){
		if(i + 1 < s.size() && mp[s[i+1]] > mp[s[i]]){
			num+=mp[s[i+1]] - mp[s[i]];
		}
		else
			num+=mp[s[i]];
	}
	cout << char(num%26 + 'A') << num%10 << endl;
}

int main(){
	func("XL");
	return 0;

}*/