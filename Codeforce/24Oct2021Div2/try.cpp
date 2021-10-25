
// C++ program to find the XOR of
// all elements in the array
 
#include <bits/stdc++.h>
using namespace std;
 
// Function to find the XOR of
// all elements in the array
int xorOfArray(int arr[], int n)
{
    // Resultant variable
    int xor_arr = 0;
 
    // Iterating through every element in
    // the array
    for (int i = 0; i < n; i++) {
 
        // Find XOR with the result
        xor_arr = xor_arr ^ arr[i];
    }
 
    // Return the XOR
    return xor_arr;
}
int removeDuplicates(int arr[], int n)
{
    if (n==0 || n==1)
        return n;
 
    // To store index of next unique element
    int j = 0;
 
    // Doing same as done in Method 1
    // Just maintaining another updated index i.e. j
    for (int i=0; i < n-1; i++)
        if (arr[i] != arr[i+1])
            arr[j++] = arr[i];
 
    arr[j++] = arr[n-1];
 
    return j;
}
 
// Driver Code
int main()
{
 
   // int arr[] = { 4, 2, 2, 4 };
    int arr[] = {1,0,1,7,12,5,3,2};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // Function call
    cout << xorOfArray(arr, n) << endl;
	 int xor_arr = 0;
 	vector<int> a;
	 // Iterating through every element in
    // the array
    for (int i = 0; i < n; i++) {
 		for(int j=0;j < n;j++){
 			xor_arr = arr[i]^ arr[j];
 			a.push_back(xor_arr);
    		//cout << xor_arr <<endl;	
		 }
	}
	
	sort(a.begin(),a.end());
	 for (auto x : a)
        cout << x << " ";
	vector<int>::iterator ip;
  
    // Using std::unique
    ip = std::unique(a.begin(), a.end());
    // Now v becomes {1 3 10 1 3 7 8 * * * * *}
    // * means undefined
  
    // Resizing the vector so as to remove the undefined terms
    a.resize(std::distance(a.begin(), ip));
  
    // Displaying the vector after applying std::unique
    for (ip = a.begin(); ip != a.end(); ++ip) {
        cout << *ip << " ";
    

	int y=4,f=2,r=0;
	
	//cout<< y^f<<endl;
    return 0;
}
}