#include<iostream>
#include<string.h>
using namespace std;
bool isSorted(int arr[],int n){
    if(n==0 || n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }else{
        bool remainPart = isSorted(arr+1,n-1);
        return remainPart;
    }
}
int main(){
int arr[5]={2,4,11,9,10};
int n =5;
bool ans = isSorted(arr,n);
if(ans){
    cout<<"array is sorted"<<endl;
}else{
    cout<<"array is not sorted"<<endl;

}
return 0;
}