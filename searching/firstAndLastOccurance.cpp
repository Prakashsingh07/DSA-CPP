#include<iostream>
#include<string.h>
using namespace std;

int firstOcc(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
       if(arr[mid] == key){
        ans = mid;
        e=mid-1;
       } else if(arr[mid]<key){
        s = mid+1;
       }else{
        e = mid-1;
       }
       mid = s+(e-s)/2;
    }
    return ans;
}


int LastOcc(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
       if(arr[mid] == key){
        ans = mid;
        s=mid+1;
       } else if(arr[mid]<key){
        s = mid+1;
       }else{
        e = mid-1;
       }
       mid = s+(e-s)/2;
    }
    return ans;
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
    cout<<"First occurance of "<<key<<" is at index "<<firstOcc(arr,n,key)<<endl;
    cout<<"Last occurance of "<<key<<" is at index "<<LastOcc(arr,n,key)<<endl;
return 0;
}