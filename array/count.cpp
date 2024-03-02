#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    int arr[n];
    int count=0;
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element"<<endl;
    cin>>n;
    for(int i=0;i<=n-1;i++){
        if(arr[i]>x){
            count++;
        }
        }
    cout<<"The count is : "<<count<<endl;
return 0;

}