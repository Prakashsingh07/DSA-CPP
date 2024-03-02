#include<iostream>
#include<string.h>
using namespace std;
void differenece(int arr[],int n){
    int sum1=0,sum2=0,diff;
    
        for(int i=1;i<n;i+=2){
            sum1+=arr[i];
        }
    
    cout<<"the sum of even indices is : "<<sum1<<endl;
         for(int i=0;i<n;i+=2){
            sum2+=arr[i];
        }
    
    cout<<"the sum of odd indices is : "<<sum2<<endl;
    if(sum1>sum2){
        diff=sum1-sum2;
        cout<<"The difference of even and odd indices is : "<<diff<<endl;
    }
    else{
        diff=sum2-sum1;
        cout<<"The difference of even and odd indices is : "<<diff<<endl;
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
    differenece(arr,n);
return 0;

}