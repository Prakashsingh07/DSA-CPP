#include<iostream>
#include<string.h>
using namespace std;
int power(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    if(a==0){
        return 0;
    }
    int ans = power(a,b/2);
    if(b%2 == 0){
        return ans*ans;
    }else{
        return a*ans*ans;
    }
}
int main(){
int a,b;
cout<<"Enter the number : ";
cin>>a>>b;
int ans = power(a,b);
cout<<"Answer : "<<ans<<endl;
return 0;
}