#include<iostream>
#include<string.h>
using namespace std;
bool search(int arr[],int n,int key){
    if(n==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }else{
        bool remainingpart = search(arr+1,n-1,key);
        return remainingpart;
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
bool ans = search(arr,n,key);
if(ans){
    cout<<"Key is present"<<endl;

}else{
    cout<<"Key is not present"<<endl;
}
return 0;
}