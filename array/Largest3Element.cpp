#include<iostream>
#include<string.h>
using namespace std;
void Largest3(int arr[],int n){
    int max1=INT16_MIN;
    int max2=INT16_MIN;
    int max3=INT16_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max3=max2;
            max2=max1;
            max1=arr[i];
        }
        else if(max2<arr[i]){
            max3=max2;
            max2=arr[i];
        }
        else if(arr[i]>max3){
            max3=arr[i];
        }
    }
    cout<<"the largest element is : "<<max1<<endl;
    cout<<"the second largest element is : "<<max2<<endl;
    cout<<"the third largest element is : "<<max3<<endl;
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
    Largest3(arr,n);
    return 0;

}