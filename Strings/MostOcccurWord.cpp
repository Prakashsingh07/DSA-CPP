#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;

int main(){
    string str = "Prakash is a student. He is a coder also";
    stringstream ss(str);
    vector<string> v;
    string temp;
    while(ss>>temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end());//By this all the same word comes at same place.
    int maxcount =1;
    int count = 1;

    for(int i=0;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        maxcount = max(maxcount,count);
    }

    for(int i=0;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        if(count==maxcount){
            cout<<v[i]<<" "<<maxcount<<endl;
        }
    }
return 0;
}