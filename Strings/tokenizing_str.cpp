/*
Using stringstream
A stringstream associates a string object with a stream allowing you to read from the string as if it were a stream.
Below is the C++ implementation : 
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	string line="I-am-Baba Yaga";
	vector<string> tokens;

	stringstream chk(line);
	string intermediate;

	while(getline(chk, intermediate,'-')){
		tokens.push_back(intermediate);

	}
	for(int i=0; i<tokens.size(); i++){
		cout << tokens[i] << endl;
	}
	return 0;
}