#include<iostream>
#include<string.h>
using namespace std;
void maxProductDifference(int nums[],int n){
    int max1=INT16_MIN;
    int max2=INT16_MIN;
    int min1=INT16_MAX;
    int min2=INT16_MAX;
    for(int i=0;i<n;i++){
        if(nums[i]>max1){
            max2=max1;
            max1=nums[i];
        }else if(nums[i]>max2 ){
            max2=nums[i];
        }else if(nums[i]<min1){
            min2=min1;
            min1=nums[i];
        }else if(nums[i]<min2 ){
            min2=nums[i];
        }
    }
    for(int i=0;i<n;i++){
         if(nums[i]<min1){
            min2=min1;
            min1=nums[i];
        }else if(nums[i]<min2 && nums[i]!=min1){
            min2=nums[i];
        }
    }

    cout<<"the maximum and second maximum number is : "<<max1<<" "<<max2<<endl;
    cout<<"the minimu and second minimum number is : "<<min1<<" "<<min2<<endl;
    cout<<"the difference is : "<<(max1*max2)-(min1*min2);
}
int main(){
int n;
cout<<"Enter the number of element : ";
cin>>n;
 int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<"The array is : ";
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    maxProductDifference(nums,n);
return 0;

}