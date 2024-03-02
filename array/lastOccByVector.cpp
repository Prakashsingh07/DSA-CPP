#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(12);
    v.push_back(11);
    v.push_back(6);
    v.push_back(0);
    int x=6;
    int idx=-1;
    // for(int i=0;i<v.size();i++){ This is done using forward loop.
    //     if(v[i]==x){
    //         idx=i;
    //     }
    // }

    //Solve by using Backward loop
    for(int i=v.size()-1;i>=0;i--){
        if(v.at(i)==x){
            idx=i;
            break;
        }
    }
    cout<<"The id of x is :"<<idx;
    return 0;

}