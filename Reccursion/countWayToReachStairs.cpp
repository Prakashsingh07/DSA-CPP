#include<iostream>
#include<string.h>
using namespace std;
int countStairs(int n){
    if(n<0)
        return 0;
    
    if(n==0)
    return 1;
    int ans= countStairs(n-1)+countStairs(n-2);
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int ans=countStairs(n);
    cout<<ans<<endl;
return 0;
}