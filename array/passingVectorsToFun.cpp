// #include<iostream>
// #include<string.h>
// #include<vector>
// using namespace std;
//     void change(vector<int> a){ // This one is pass by value function.
//         a[0]=100;
//         for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     }
// int main(){
//     vector<int> v;
//     v.push_back(9);
//     v.push_back(10);
//     v.push_back(6);
//     v.push_back(1);
//     for(int i=0;i<v.size();i++){
//         cout<<v.at(i)<<" ";
//     }
//     cout<<endl;
//     change(v);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     return 0;

// }


#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
    void change(vector<int>& a){ // This one is pass by Refrence function.
        a[0]=100;
    //     for(int i=0;i<a.size();i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    }
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    change(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;

}