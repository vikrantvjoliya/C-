#include <bits/stdc++.h>
using namespace std;
void sumPower(long int x) {
   vector<long int> powers;
   while (x > 0){
      powers.push_back(x % 2);
      x = x / 2;
   }
   for (int i = 0; i < powers.size(); i++){
      if (powers[i] == 1){
         cout << i;
         if (i != powers.size() - 1)
            cout<<", ";
      }
   }
   cout<<endl;
}
int main() {
   int number = 15;
   cout<<"Powers of 2 that sum upto "<<number<<"are : ";
   sumPower(number);
   
   int n;
   cin>>n;
   
	int previous_term=1,total=0;
    while(previous_term<=n)
	{
	total=total+previous_term;
    previous_term=previous_term*2;
	}
	cout<<"\n"<<total<<"\n";   
   int i;

	for(i=1;i<=128;i*=2)
		cout<<i<<" ";
   return 0;
}
