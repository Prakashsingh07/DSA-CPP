#include<iostream>
#include<string.h>
using namespace std;
bool checkpalindrome(string str,int i,int j){
    if(i>j){
        return true;
    }
    if(str[i]!=str[j]){
        return false;
    }else{
        return checkpalindrome(str,i+1,j-1);
    }
}
int main(){
string str;
cout<<"Enter the string : ";
getline(cin,str);
bool ispalindrome = checkpalindrome(str,0,str.length()-1);
if(ispalindrome){
    cout<<"String is Palindrome"<<endl;

}else{
    cout<<"String is not the palindrome"<<endl;
}
return 0;
}