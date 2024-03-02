#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

int main(){
    vector<int> arr;
    arr.push_back(6);
    arr.push_back(1);
    arr.push_back(9);
    arr.push_back(0);
   
    for(int i=0;i<arr.size();i++){
        cout<<arr.at(i)<<" ";
    }
    cout<<endl;
    // sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        cout<<arr.at(i)<<" ";
    }
return 0;
}