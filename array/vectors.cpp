// vectors is a dynamic array.
#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

int main(){
    vector<int> arr;//need not to mention size.
    arr.push_back(6);
    arr.push_back(1);
    arr.push_back(9);
    arr.push_back(0);
    cout<<arr[0]<<" ";
    cout<<arr[1]<<" ";
    cout<<arr[2]<<" ";
    cout<<arr[3]<<" ";
return 0;
}