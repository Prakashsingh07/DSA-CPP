#include<iostream>
#include<string.h>
using namespace std;
void swap(int* x,int* y){
    int temp= *x;
    *x=*y;
    *y=temp;
}

int main(){
    int a,b;
    cout<<"Enter the number :"<<endl;
    cin>>a>>b;
    swap(&a,&b);
    cout<<"a :"<<a<<endl;
    cout<<"b :"<<b<<endl;
return 0;

}