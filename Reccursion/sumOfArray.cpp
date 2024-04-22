#include<iostream>
#include<string.h>
using namespace std;
int ArrSum(int arr[],int n){
    if (n == 0)
        return 0;
    
    
    return arr[n - 1] + ArrSum(arr, n - 1);
}
int main(){
int n;
cout<<"Enter the number of element : ";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int ans = ArrSum(arr,n);
cout<<ans;
return 0;
}