#include<bits/stdc++.h>
using namespace std;

// Function to print all sub strings
void subString(string s, int n)
{
	// Pick starting point in outer loop
	// and lengths of different strings for
	// a given starting point
	for (int i = 0; i < n; i++)
		for (int len = 1; len <= n - i; len++)
			cout << s.substr(i, len) << endl;
}

int main()
{	
	string s1 = "localization";
	string s2 = "ab";
	string x = "abc";
	vector<string> prefix_s1,prefix_s2;
	int i;
	for(int i=0;i<s1.length()+1;i++)
		cout<<s1.substr(0,i)<<"\n";
		prefix_s1.push_back(s1.substr(0,i));
		std::cout << prefix_s1[i] << "\n";
	for (int i = 0; i < prefix_s1.size(); i++)
        std::cout << prefix_s1[i] << "\n";
        
	for(int i=0;i<s2.length()+1;i++)
		cout<<s2.substr(0,i)<<"\n";
		prefix_s2.push_back(s2.substr(0,i));
		
	return 0;
}

/*
subString(s1,s1.length());
	cout<<"\n";
	subString(s2,s2.length());
	cout<<"\n";
	subString(x,x.length());
	
*/

/*#include<iostream>	
#include<vector>	
#include<string>		
int	 main()	{
	std::vector<std::string> col{"a", "b", "c", "d", "e", "f"};
	col.push_back("OPOPO");	
	for(int i=0; i<col.size(); i++)	{
		std::cout << col[i] << std::endl;		
	}
	
	
	return 0;
}



#include <iostream>
int main(){
	const char *col[5]={"a", "b", "c", "d", "e",};
	for(int i=0; i<5; i++){
		std::cout<<col[i] << "\t";

	}
	return 0;
}

*/
