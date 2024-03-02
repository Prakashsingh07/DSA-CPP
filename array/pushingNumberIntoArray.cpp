#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

int main(){
int n=54;
vector<int> v;
while(n!=0){
    int ans=n%10;
    v.push_back(ans);
    n=n/10;
}
for(int i=v.size()-1;i>=0;i--){
    cout<<v[i]<<" ";
}
return 0;

}