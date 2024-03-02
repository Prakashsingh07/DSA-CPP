#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
// void sort01(vector<int>& v){
//     int n=v.size();
//     int num0=0;
//     int num1=1;
//     for(int i=0;i<n;i++){
//         if(v[i]==0){
//              num0++;
//         }else{
//             num1++;
//        }
//     }
//     for(int i=0;i<n;i++){
//         if(i<num0){
//             v[i]=0;
//         } else{
//             v[i]=1;
//         }
//     }
//     }
void sort01(vector<int>& v){
    int n=v.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if(v[i]==0){
            i++;
        }else if(v[j]==1){
            j--;
        }else if(v[i]==1 && v[j]==0){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
    }
}

int main(){
vector<int> v;
v.push_back(1);
v.push_back(1);
v.push_back(0);
v.push_back(1);
v.push_back(0);
v.push_back(1);
v.push_back(1);
v.push_back(0);

for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
sort01(v);

// sort
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
return 0;
}