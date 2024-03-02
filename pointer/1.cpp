#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int x;
    int y;
    int* p1=&x;
    int* p2=&y;
    cout<<"Enter first number : ";
    cin>>*p1;
    cout<<"Enter the second number : ";
    cin>>*p2;
    cout<<*p1+ *p2;
return 0;
}