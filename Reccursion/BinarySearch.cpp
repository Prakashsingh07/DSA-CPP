#include<iostream>
#include<string.h>
using namespace std;
void print(int arr[],int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool BinearySearch(int arr[],int s,int e,int key){
    print(arr,s,e);
    int mid = s+(e-s)/2;
    if(s>e){
        return false;
    }
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]<key){
        return BinearySearch(arr,mid+1,e,key);
    }else{
        return BinearySearch(arr,s,mid-1,key);
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
int key;
cout<<"Enter the key : ";
cin>>key;
bool ans = BinearySearch(arr,0,n-1,key);
if(ans){
    cout<<"Key is present"<<endl;

}else{
    cout<<"Key is not present"<<endl;
}
return 0;
}