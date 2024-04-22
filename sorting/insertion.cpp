#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;

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
      for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }else {
                break;
            }
        }
        arr[j+1]=temp;
      }
return 0;
}