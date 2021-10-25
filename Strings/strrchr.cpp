// C++ program to demonstrate working strchr()
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
char str[] = "This is a string";
char a;
cin>>a;
char * ch = strrchr(str,a);
cout << ch - str + 1;
return 0;
}
