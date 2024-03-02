// #include<iostream>
// #include<string.h>
// using namespace std;

// int main(){
//     int x=7;
//     int* ptr=&x;
//     // cout<<ptr<<endl;
//     cout<<*ptr<<endl;
//     ptr=ptr+1;
//     // cout<<ptr<<endl;
//     cout<<*ptr<<endl;
// return 0;

// }


// #include<iostream>
// #include<string.h>
// using namespace std;
// void find(int n,int* ptr1,int* ptr2){
//     *ptr2 = n%10;
//     while(n>9){
//         n=n/10;
//     }
//     *ptr1=n;
// }
// int main(){
//     int n;
//     cin>>n;
//     int firstdigit,lastdigit;
//     int* ptr1=&firstdigit;
//     int* ptr2=&lastdigit;
//     find(n,ptr1,ptr2);
//     cout<<firstdigit<<" "<<lastdigit;
// return 0;

// }



// #include<iostream>
// #include<string.h>
// using namespace std;

// int main(){
//  int x,y;
//  cout<<"Enter the number:"<<" ";
// //  cin>>x>>y;
//  int* ptr1=&x;
//  int* ptr2=&y;
//  cin>>*ptr1;
//  cin>>*ptr2;
//  cout<<"product of two x and y is :"<<(*ptr1)* (*ptr2);
// return 0;

// }

#include<iostream>
#include<string.h>
using namespace std;

int main(){
int a=10,b=20;
int *ptr;
*ptr=5;
cout<<*ptr;
return 0;

}