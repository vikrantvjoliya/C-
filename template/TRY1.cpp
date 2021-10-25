#include <iostream>
#include <bits/stdc++.h>
#include<vector>
#include <iterator>
#define ll long long
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


using namespace std;

int main() {
    fastio();
	ll n,k;
	cin>>n>>k;
	if(k==0){
		cout<<"YES"<<endl;
		cout<<0<<endl;
		}
	
	if(k%2==0){
		cout<<"YES"<<endl;
		}
	
	ll sa=0;
	for(ll i=32; i>=0;i--){
		if(((1<<i)&k)!=0){
			sa=i+1;
			break;
		}
	}
	
	k=(k+(1<<sa)-1)/2;
	cout<<"YES"<<"\n"<<sa<<endl;
	
	int ans=1;
	
	vector<int> a;
	for(int i=sa-2;i>=0;i--){
		if(((1<<i)&k)!=0){
			a.push_back(ans);
			ans+=(1<<i);
		}
		else{
			ans-=(1<<i);
			a.push_back(ans);
		}
	}
	for(int i=sa-2;i>=0;i--){
		cout<<a[i]<<endl;
	cout<<ans<<endl;
	}
	return 0;

}

