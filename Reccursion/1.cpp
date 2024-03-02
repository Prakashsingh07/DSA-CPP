#include<iostream>
#include<string.h>
using namespace std;
int first(int arr[],int n,int x){
    if(n==0) return -1;
    if(arr[0]==x) return 0;
    int i=first(arr+1,n-1,x);
    if(i!=-1) return i+1;
    return -1;
}
int lastocc(int arr[],int n,int k,int i){
    if(i==n){
        return -1;
    }
    int x=lastocc(arr,n,k,i+1);
    if(x==-1){
        if(arr[i]==k){
            return 0;
        }
        else{
            return -1;
        }
    }
    else{
        return x+1;
    }
}

int main(){
    int arr[]={1,3,5,7,6,7};
    int key=7;
    int n=6;
    cout<<first(arr,n,key)<<endl;
    cout<<lastocc(arr,n,key,3);
    return 0;
}

