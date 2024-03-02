#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
void trap(vector<int> &height){
    int n=height.size();
    //firstly find the previous greatest number.
    int prev[n];
    prev[0]=-1;
    int max=height[0];
    for(int i=0;i<n;i++){
        prev[i]=max;
        if(max<height[i]) max=height[i];
    }
    //now find the next greatest number.
    int next[n];
    max=height[n-1];
    next[n-1]=-1;
    for(int i=n-2;i>=0;i--){
        next[i]=max;
        if(max<height[i]) max=height[i];
    }
    //now find the minimum of both array.
    int mini[n];
    for(int i=0;i<n;i++){
        mini[i]=min(prev[i],next[i]);
    }
    //then find the amount of water..
    int water=0;
    for(int i=1;i<n-1;i++){
        if(mini[i]>height[i]){
            water+=(mini[i]-height[i]);
        }
    }
    cout<<water;
}
int main(){
    vector<int> height;
    height.push_back(0);
    height.push_back(1);
    height.push_back(0);
    height.push_back(2);
    height.push_back(1);
    height.push_back(0);
    height.push_back(1);
    height.push_back(3);
    height.push_back(2);
    height.push_back(1);
    height.push_back(2);
    height.push_back(1);
     for(int i=0;i<height.size();i++){
        cout<<height[i]<<" ";
    }
    cout<<endl;
    trap(height);
return 0;
}