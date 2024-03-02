#include<iostream>
#include<string.h>
using namespace std;
int fun(int arr[],int n,int x){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>x){
            count++;
        }   
    }
    return count;
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
    int x;
    cout<<"Enter the element : ";
    cin>>x;
    cout<<"Number of elements greater than "<<x<<" is "<<fun(arr,n,x);
    return 0;
}


// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int findKthLargest(int N, vector<int>& numbers, int k) {
//     if (k > N || k <= 0) {
//         return -1;  // Invalid k value
//     }

//     sort(numbers.rbegin(), numbers.rend());  // Sort in descending order

//     return numbers[k - 1];
// }

// int main() {
//     int N;
//     cout<<"enter";
//     cin >> N;

//     vector<int> numbers(N);
//     for (int i = 0; i < N; ++i) {
//         cin >> numbers[i];
//     }

//     int k;
//     cout<<"enter";
//     cin >> k;

//     int result = findKthLargest(N, numbers, k);

//     cout << result << endl;

//     return 0;
// }