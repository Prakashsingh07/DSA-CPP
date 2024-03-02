#include<iostream>
#include<string.h>
#include<vector>

using namespace std;
// void sortColors(vector<int>& nums) {
//        int n=nums.size();
//        for(int i=0;i<n-1;i++){
//            for(int j=i+1;j<n;j++){
//                if(nums[i]>nums[j]){
//                    swap(nums[i],nums[j]);
//                }
//            }
//        }
//     }

//BY DUTCH FLAG ALGORITHM.

void sortcolors(vector<int> & nums){
    int n=nums.size();
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        if(nums[mid]==2){
            swap(nums[mid],nums[high]);
            high--;
        }else if(nums[mid]==0){
            swap(nums[mid],nums[low]);
            low++;
            mid++;
        }else mid++;
    }
}
int main(){
vector<int> v;
v.push_back(2);
v.push_back(0);
v.push_back(2);
v.push_back(1);
v.push_back(1);
v.push_back(0);
// v.push_back(8);
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
sortcolors(v);

// sort
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
return 0;
}