 #include<iostream>
 #include<string.h>
 using namespace std;
 int numIdenticalPairs(int nums[],int n){
    int count=0;
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(nums[i]==nums[j]){
            cout<<"["<<nums[i]<<","<<nums[j]<<"]"<<endl;
            count++;
        }
    }
   } 
   return count;
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
    cout<<numIdenticalPairs(nums,n)<<endl;
return 0;
 
 }