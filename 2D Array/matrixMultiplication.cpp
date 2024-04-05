#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

int main(){
    int m;
    cout<<"Enter rows of first martix";
    cin>>m;
    int n;
    cout<<"Enter column of first matrix";
    cin>>n;

    int p;
    cout<<"Enter rows of second martix";
    cin>>p;
    int q;
    cout<<"Enter column of second matrix";
    cin>>q;

    if(n==p){
        int a[m][n];
        
        cout<<"Enter the element of 1st matrix: ";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        int b[p][q];
        cout<<"Enter the element of 2st matrix: ";
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }

        //resultant matrix;
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                for(int k=0;k<p;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"The matrices cannot vbe multiplied";
    }

return 0;

}