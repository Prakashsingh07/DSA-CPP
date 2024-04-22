#include<iostream>
#include<string.h>
using namespace std;
 int factorial(int n){
    if(n==0)
        return 1;
        
    
        // int fact=factorial(n-1);
        // int fact1=n*fact;
        // return fact1;
        return n*factorial(n-1);
    
 }
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int ans=factorial(n);
    cout<<ans<<endl;
return 0;
}