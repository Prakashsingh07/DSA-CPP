#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversepart(int i,int j,vector<int>& v1){
    while(i<=j){
        int temp=v1[i];
        v1[i]=v1[j];
        v1[j]=temp;
       i++;
       j--;
       }
       return;
}

int main(){
    vector<int>v1;
    v1.push_back(3);
    v1.push_back(2);
    v1.push_back(6);
    v1.push_back(34);
    v1.push_back(7);
    v1.push_back(8);
    v1.push_back(2);
    display(v1);
//     int i=0;
//     int j=v1.size()-1;
//    while(i<=j){
//         int temp=v1[i];
//         v1[i]=v1[j];
//         v1[j]=temp;
//        i++;
//        j--;
//        }


    //    for(int i=0,j=v1.size()-1;i<=j;i++,j--){
    //     swap(v1[i],v1[j]);
    //    }
    
    reversepart(0,3,v1);

    display(v1);

    return 0;

}
