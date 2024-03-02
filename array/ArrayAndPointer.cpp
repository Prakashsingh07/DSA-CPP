// // #include <iostream>
// // using namespace std;

// // int main()
// // {
// //     // int n;
// //     // cout<<"Enter the string"<<endl;
// //     // cin>>n;
// //     char str[100]={"aabcbccb"};
// //     // cin.getline(str,n);
// //     int i;
// //     int freq[256] = {0};
// //     for(i = 0; str[i] != '\0'; i++)
// //     {
// //         freq[str[i]]++;
// //     }
// //     for(i = 0; i < 256; i++)
// //     {
// //         if(freq[i] != 0)
// //         {
// //            cout<<"The frequency of "<<char(i)<<" is "<<freq[i]<<endl;
// //         }
// //     }
// //     return 0;
// // }

// // #include <iostream>
// // #include <stdio.h>

// // using namespace std;

// // int main()
// // {
// //     char str[100] = "abcdefghijklmnop";
// //     int vowels = 0;
    
// //     for(int i = 0; str[i]; i++)  
// //     {
// //         if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'
// //         ||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O' ||str[i]=='U')
// //         {
// // 		    vowels++;
// //         }
// //     }
    
// //     cout << "Total Vowels : " << vowels;
    
// //     return 0;
// //  }


// // // permutation of string

// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//    bool checkInclusion(string s1, string s2) {
//       vector <int> cnt1(26), cnt2(26);
//       for(int i = 0; i < s1.size(); i++)cnt1[s1[i] - 'a']++;
//       int j = 0;
//       int required = s1.size();
//       for(int i = 0; i < s2.size(); i++){
//          char x = s2[i];
//          cnt2[x - 'a']++;
//          if(cnt1[x - 'a'] && cnt2[x - 'a'] <= cnt1[x - 'a']) required--;
//          while(j <= i && cnt2[s2[j] - 'a'] - 1 >= cnt1[s2[j] - 'a']){
//             cnt2[s2[j] - 'a']--;
//             j++;
//          }
//          if(i - j + 1 == s1.size() && required == 0){
//             return true;
//          }
//       }
//       return false;
//    }
// };
// main(){
//    Solution ob;
//    cout << (ob.checkInclusion("abc", "findcab"));
// }


#include<iostream>
#include<string.h>
using namespace std;

int main(){
   int arr[]={1,2,3,4};
   int* ptr=arr;
   cout<<*ptr;
   cout<<endl;
   int size=sizeof(arr)/sizeof(arr[0]);
   cout<<size<<endl;
   for(int i=0;i<=3;i++){
      cout<<ptr[i]<<" ";
   }
   cout<<endl;
return 0;

}