// #include<iostream>
// #include<string.h>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number "<<endl;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int sum=0;
//     int key;
//     cout<<"Enter the key"<<endl;
//     cin>>key;
//     bool flag=false;
//     // cout<<"The array is : "<<endl;
//     for(int i=0;i<n;i++){
//         // cout<<arr[i]<<" ";
//         if(arr[i]==key){
//            flag=true;
//         }
        
        
//     }
//     if(flag==true){
//         cout<<"element found"<<endl;
//     }
//     else{
//         cout<<"Not found"<<endl;
//     }
    
    
// return 0;

// }


// MAX AND MIN

#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<=n-1;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"The maximum number is "<<max<<endl;
return 0;

}