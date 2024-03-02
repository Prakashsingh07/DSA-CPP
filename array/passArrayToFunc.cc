#include<iostream>
#include<string.h>
using namespace std;
void set(int arr[],int n){
    cout<<"Enter the elements"<<" ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    cout<<endl;
}
void display(int arr[],int n){
    cout<<"The required array is :"<<" ";
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int arr[n];
    set(arr,n);
    display(arr,n);
return 0;

}
