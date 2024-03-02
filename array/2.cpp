// #include<iostream>
// #include<string.h>
// using namespace std;

// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<n;
// return 0;
// }


// #)MEMORY ALLOCATION IN ARRAY.
// continous memory allocation.

// #include<iostream>
// #include<string.h>
// using namespace std;

// int main(){
//     int arr[5];
//     cout<<&arr[0]<<endl;
//     cout<<&arr[1]<<endl;
//     cout<<&arr[2]<<endl;
//     cout<<&arr[3]<<endl;
//     cout<<&arr[4]<<endl;
    
// return 0;

// }

#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    cout<<"The array is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        sum+=arr[i];
    }
    cout<<endl;
    cout<<"The sum of array is "<<sum<<endl;
    

return 0;

}