#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
   vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> t(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                t[i][j] = matrix[j][i];
            }
        }
        return t;
    }
int main(){
    int m;
    cout<<"Enter the row";
    cin>>m;
    int n;
    cout<<"Enter the col";
    cin>>n;

    vector<vector<int>> matrix(m,vector<int>(n));
return 0;

}