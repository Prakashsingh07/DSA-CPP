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
    cout<<endl;
    }
    //printing transpose.
    // for(int j=0;j<n;j++){
    //     for(int i=0;i<m;i++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int t[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            t[i][j]=arr[j][i];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;

}