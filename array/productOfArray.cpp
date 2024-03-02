#include<iostream>
#include<string.h>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
int main(){
    int n;
    cout<<"Enter the number of element";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    cout<<"The array is :";
    display(arr,n);
    int mul=1;
    for(int i=0;i<=n-1;i++){
        mul*=arr[i];

    }
    cout<<"The product of array is : "<<mul<<endl;
return 0;

}