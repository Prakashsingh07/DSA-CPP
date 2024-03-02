#include<iostream>
#include<string.h>
#include<vector>

using namespace std;
// vector<int> merge(vector<int> &nums1,int m,vector<int> & nums2,int n){
//     vector<int> ans(m+n);
//     int i=0;
//     int j=0;
//     int k=0;
//     while(i<=n-1 && j<=m-1){
//         if(nums1[i]<nums2[j]){
//             ans[k]=nums1[i];
//             i++;
            
//         }else{
//             ans[k]=nums2[j];
//             j++;
//         }
//         k++;
//     }
//     if(i==n){
//         while(j<=m-1){
//             ans[k]=nums2[j];
//             k++;
//             j++;
//         }
//     }
//     else{
//         while(i<=n-1){
//             ans[k]=nums1[i];
//             i++;
//             k++;
//         }
//     }
//     // for(int i=0;i<ans.size();i++){
//     //     cout<<ans[i]<<" ";
//     // }
//     // cout<<endl;
//     return ans;
// }

//Another Method....

 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // vector<int> ans(m+n);
        int i=m-1;
        int j=n-1;
        int k=m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i]<nums2[j]){
                nums1[k]=nums2[j];
                j--;
            }else{
                nums1[k]=nums1[i];
                i--;
            }
            k--;
        }
        if(j==0){
            while(i>=0){
                nums1[k]=nums1[i];
                i--;
                k--;
            }
        }
        if(i==0){
            while(j>=0){
                nums1[k]=nums2[j];
                i--;
                j--;
            }
        }
        
    }

int main(){
vector<int> nums1;
vector<int> nums2;
nums1.push_back(1);
nums1.push_back(2);
nums1.push_back(3);
nums1.push_back(0);
nums1.push_back(0);
nums1.push_back(0);

nums2.push_back(2);
nums2.push_back(5);
nums2.push_back(6);
for(int i=0;i<nums1.size();i++){
    cout<<nums1[i]<<" ";
}
cout<<endl;
for(int i=0;i<nums2.size();i++){
    cout<<nums2[i]<<" ";
}
cout<<endl;
int m;
cout<<"Enter the value of M : ";
cin>>m;
int n;
cout<<"Enter the value of N : ";
cin>>n;
 merge(nums1,m,nums2,n);
 for(int i=0;i<nums1.size();i++){
    cout<<nums1[i]<<" ";
}
cout<<endl;

// for(int i=0;i<res.size();i++){
//     cout<<res[i]<<" ";
// }
// return 0;

}