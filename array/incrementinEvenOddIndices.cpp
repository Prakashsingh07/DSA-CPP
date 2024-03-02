#include<iostream>
#include<string.h>
using namespace std;
void increment(int arr[],int n){
    cout<<"The new array is : ";
    for(int i=0;i<n;i++){
        if(i%2==0){
            cout<<arr[i]+10<<" ";
        }
        else{
            cout<<arr[i]*2<<" ";
        }
    }
}
void display(int arr[],int n){
    cout<<"The required array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the number of element : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    display(arr,n);
    increment(arr,n);
    // display(arr,n);
return 0;

}