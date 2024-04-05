#include<iostream>
#include<string.h>
using namespace std;

int main(){
string s;
getline(cin,s);
int n=s.length();
cout<<s<<endl;
cout<<s.substr(n/2);
return 0;
}