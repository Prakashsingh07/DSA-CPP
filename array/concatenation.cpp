#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
void concatenation(int nums[],int n){
    
    // int n=nums.size();
    int ans[2*n];
    cout<<"The new array is : "<<" ";
    for(int i=0;i<n;i++){
        ans[i]=nums[i];
        ans[i+n]=nums[i];
    }
    // return ans;
    for(int i=0;i<2*n;i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the element : ";
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
        // int q;
        // cin>>q;
        // nums.push_back(q);
    }
        cout<<"the array is : ";
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    concatenation(nums,n);
    return 0;
}