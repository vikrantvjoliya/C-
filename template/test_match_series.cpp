#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    while(n--){
        int ind=0,eng=0;
        int ar[5];
        for(int i=0;i<5;i++)
            cin>>ar[i];
        for(int i=0;i<5;i++){
			if(ar[i]==1){
				ind++;
			}
			else if(ar[i]==2){
				eng++;
			
			}
		}
		if(ind>eng){
			cout<<"INDIA"<<endl;
		}
		else if(eng>ind){
			cout<<"ENGLAND"<<endl;
		}
		else{
		    cout<<"DRAW"<<endl;
		}
	}
    

   return 0;
}


/*

#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a,b,c,d,e;
    cin >> n;
    vector<int> t;
    int draw=0,ind=0,eng=0;
    while(n--){
    	
        cin>>a>>b>>c>>d>>e;
        t.push_back(a);
        t.push_back(b);
        t.push_back(c);
        t.push_back(d);
        t.push_back(e);
    	for(int i=0;i<t.size();++i){
    		//cout<<t[i]<<"\n";
    		if(t[i]==0){
    			draw++;
			}
			if(t[i]==1){
				ind++;
			}
			if(t[i]==2){
				eng++;
			
			}
		}
		if((draw>ind && draw>eng) || ind==eng){
			cout<<"DRAW"<<"\n";
		}
		if(ind>eng){
			cout<<"INDIA"<<"\n";
		}
		if(eng>ind){
			cout<<"ENGLAND"<<"\n";
		}
		cout<<draw<<"\n";
		cout<<ind<<"\n";
		cout<<eng<<"\n";
	}
    

   return 0;
}
*/
