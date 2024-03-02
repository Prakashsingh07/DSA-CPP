// #include<iostream>
// #include<string.h>
// using namespace std;
// void maximum(int arr[],int n){
//     int max1=INT16_MIN;
//     int max2=INT16_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]>max1){
//             max1=arr[i];
//         }
//     }
//     cout<<"The maximum number is : "<<max1<<endl;
//     for(int i=0;i<n;i++){
//         if(arr[i]>max2 && arr[i]!=max1){
//             max2=arr[i];
//         }
//     }
//     cout<<"The second largest number is : "<<max2;
//     // return max1;
// }
// int main(){
//     int n;
//     cout<<"Enter the element number : ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     maximum(arr,6);
// return 0;

// }
#include<iostream>
#include<string.h>
using namespace std;
int secondLargest(int arr[],int n){
    int max1=INT16_MIN;
    int max2=INT16_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        else if(max2<arr[i] and arr[i]!=max1){
            max2=arr[i];
        }
    }
    return max2;
}
int main(){
    int n;
    cout<<"Enter the number of element : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
        int secondMax=secondLargest(arr,n);
        cout<<"The second max is : "<<secondMax;
    return 0;

}