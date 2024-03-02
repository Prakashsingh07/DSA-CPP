// #include<iostream>
// #include<string.h>
// #include<vector>
// using namespace std;

// int main(){
    
//     int x;
//     cout<<"Enter the target :";
//     cin>>x;
//     vector<int> v;
//     int n;
//     cout<<"Enter the array size : ";
//     cin>>n;
//     cout<<"Enter the elements : ";
//     for(int i=0;i<n;i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     for(int i=0;i<=v.size()-2;i++){
//         for(int j=i+1;j<=v.size()-1;j++){
//             if(v[i]+v[j]==x){
//                 cout<<"("<<i<<","<<j<<")"<<endl;
//             }
//         }
//     }
//     return 0;

// }
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"Enter target";
    cin>>x;
    vector<int> v;
    int n;
    cout<<"Enter size";
    cin>>n;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    for(int i=0;i<=v.size();i++){
        for(int j=i+1;j<=v.size();j++){
            if(v[i]+v[j]==x){
                cout<<"["<<i<<","<<j<<"]"<<endl;
            }
        }
    }
    return 0;
}