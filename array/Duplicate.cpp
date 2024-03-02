#include<iostream>
#include<string.h>
using namespace std;
// void duplicate(int arr[],int n){
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 cout<<arr[i]<<" have duplicate at index "<<i<<" and "<<j<<endl;
//             }
//         }
//     }
    
// }

bool duplicate(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
               
                return 1;
            }
        }
    }
    return 0;
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
    int found=duplicate(arr,n);
    if(found){
       cout<<"array have duplicate"<<endl;
    }
    else{
        cout<<"doesn't contain duplicate";
    }
    // duplicate(arr,n);
    return 0;

}