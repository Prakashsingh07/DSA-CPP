#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;

int main(){
    string str = "Prakash singh is a student";
    stringstream ss(str);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }
return 0;

}