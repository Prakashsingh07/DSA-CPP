#include<iostream>
#include<string.h>
using namespace std;
bool palindrome(int arr[],int n){
    for(int i=0;i<n;i++){
    for(int j=n-1;j>=0;j--){
            if(arr[i]==arr[j]){
                return 1;
            }
    return 0;
    }
    }
}
int main(){
    int n;
    cout<<"Enter the number of element : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool found=palindrome(arr,n);
    if(found==1){
        cout<<"The array is palindrome";
    }else{
        cout<<"Not palindrome";
    }
return 0;
}