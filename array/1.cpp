#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char sentence[100];
    char temp;
    int len=0;
    int digit=0,alpha=0,space=0;
    while(temp != '\n'){
        temp=cin.get();
        if(temp>='0' and temp<='9'){
            digit++;
        }
        else if((temp>='a' and temp<='z') or (temp>='A' and temp<='Z')){
            alpha++;
        }
        else if(temp==' ' or temp=='\t'){
            space++;
        }
    }
    cout<<"alphabets : "<<alpha<<endl;
    cout<<"digits : "<<digit<<endl;
    cout<<"spaces : "<<space<<endl;
return 0;

}