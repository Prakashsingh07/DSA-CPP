#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
string s;
cout<<"Enter the string : ";
getline(cin,s);
cout<<s<<endl;
sort(s.begin(),s.end());
cout<<s;
return 0;

}