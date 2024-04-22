// #include<iostream>
// #include<string.h>
// using namespace std;

// int main(){
// string s;
// cout<<"Enter the string : ";
// getline(cin,s);
// int max = 0;
// for(int i=0;i<s.length();i++){
//     char ch = s[i];
//     int count = 1;
//     for(int j=i+1;j<s.length();j++){
//         if(s[j]==s[i]){
//             count++;
//         }
//     }
//     if(max<count){
//         max=count;
//     }
// }
// // int mx = max;
// // max=0;
// for(int i=0;i<s.length();i++){
//     char ch=s[i];
//     int count=1;
//     for(int j=i+1;j<s.length();j++){
//         if(s[j]==s[i]) count++;
//     }
//     if(count==max) {
//         cout<<ch<<" "<<max<<endl;
//     }
// }
// // cout<<max;
// return 0;
// }

// ANOTHER METHOD.

#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
// int arr[26];
string s = "leetcode";
vector<int> arr(26,0);
for(int i=0;i<s.length();i++){
    char ch=s[i];
    int ascii = (int)ch;
    arr[ascii-97]++;
}
int mx=0;
for(int i=0;i<26;i++){
    if(arr[i]>mx) mx = arr[i];
}

for(int i=0;i<26;i++){
    if(arr[i]==mx){
        int ascii = i+97;
        char ch =(char)ascii;
        cout<<ch<<" "<<mx<<endl;
    }
}
return 0;

}