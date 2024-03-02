#include<iostream>
#include<string.h>
#include<vector>

using namespace std;
void reversepart(vector<int>& nums,int i,int j){
    while(i<j){
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
        i++;
        j--;
    }
}
void nextPermutation(vector<int>& nums){
    int n=nums.size();
    //finding the pivot value
    int idx=-1;
    for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            idx=i;
            break;
        }
    }
    //if there is no pivot value.
    if(idx==-1){
       int i=0;
       int j=n-1;
       while(i<j){
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
        i++;
        j--;
       }
       return;
    }
    //if ther is pivot value then sort all the value after the pivot value that means it is already in ascending order just reverse that part after pivot value..
    reversepart(nums,idx+1,n-1);
    //now find the value which is just larger than the pivot value.
    int j=-1;
    for(int i=idx+1;i<n;i++){
        if(nums[i]>nums[idx]){
            j=i;
            break;
        }
    }
    //now swap the pivot value and the value which is just larger than it..This will give the next permutation.
    int temp=nums[idx];
    nums[idx]=nums[j];
    nums[j]=temp;
   
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";

    }
    cout<<endl;
}
int main(){
    // int n;
    // cout<<"Enter the number of element";
    // cin>>n;
    vector<int> nums;
    // nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(1);
    // for(int i=0;i<n;i++){
    //     cin>>nums[i];
    // }
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    nextPermutation(nums);

return 0;

}