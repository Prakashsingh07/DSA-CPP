#include<iostream>
#include<string.h>
using namespace std;
//binary search only applied on monotonous function.
int binarySearch(int arr[],int n,int key){
    int s = 0;
    int e = n-1;
    int mid= s + (e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s + (e-s)/2;
    }
    return -1;
}
int main(){
     int n;
    cout<<"Enter the number of element : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The Array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl; 
    int key;
    cout<<"Enter the key : ";
    cin>>key;
    int index = binarySearch(arr,n,key);
    cout<<"Index of the given key is : "<<index<<endl;
return 0;
}