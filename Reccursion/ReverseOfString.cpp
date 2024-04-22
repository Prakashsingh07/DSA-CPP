#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
// void reverseString(string &str,int i,int j){
    // int i=0;
    // int j=n-1;
//     if(i>j){
//         return ;
//     }
//     swap(str[i],str[j]);
//     i++;
//     j--;
//     reverseString(str,i,j);
// }
void reverseString(string &str,int i){
    if(i>str.length()-i-1){
        return ;
    }
    swap(str[i],str[str.length()-i-1]);
    // i++;
    reverseString(str,i+1);
}
int main(){
string str;
cout<<"Enter the string : ";
getline(cin,str);
reverseString(str,0);
cout<<str<<endl;
return 0;
}