#include<iostream>
#include<string.h>
using namespace std;
void merge(int *arr,int s,int e){
    int mid=(s+e)/2;
    //len1 of first array
    int len1 = mid-s+1;
    //len1 of second array
    int len2 = e-mid;
    //making new arrays to store the main array
    int *first=new int(len1);
    int *second=new int(len2);
    //filling the first array
    int mainArrayIndex = s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainArrayIndex++];
    }
    //filling the seond array
     mainArrayIndex = mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainArrayIndex++];
    }
    //merging two sorted array
    int index1=0;
    int index2=0;
    mainArrayIndex=s;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainArrayIndex++]=first[index1++];
        }else{
             arr[mainArrayIndex++]=second[index2++];
        }
    }
    while (index1<len1)
    {
          arr[mainArrayIndex++]=first[index1++];
    }
    while (index2<len2)
    {
        arr[mainArrayIndex++]=second[index2++];
    }
    
    
}
void mergesort(int *arr,int s,int e){
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}
int main(){
int n;
cout<<"Enter the length of array : ";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"The array is : ";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
mergesort(arr,0,n-1);
cout<<"The merge sorted array is : ";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}