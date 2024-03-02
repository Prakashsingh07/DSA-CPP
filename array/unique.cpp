#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
void unique(vector<int> &arr,int n){
    for(int i=0;i<n;i++){
            int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j] && i != j){
                
                count++;
            }
        }
        if(count==0){
            cout<<arr[i]<<" ";
            break;
        }
    }
    
}
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the number of element : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    display(arr);
    unique(arr,n);
    
return 0;

}