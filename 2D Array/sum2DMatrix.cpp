#include<iostream>
#include<string.h>
using namespace std;

int main(){
 int m;
    cout<<"Enter the numer of row element ";
    cin>>m;
    int n;
    cout<<"Enter the numer of column element ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;
    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
        }
    }
    cout<<sum;
return 0;

}