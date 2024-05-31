// #include<iostream>
// #include<string.h>
// #include<vector>

// using namespace std;

//     class Node{
//         public:
//         int data;
//         Node* next;

//         Node(int val){
//             this->data=val;
//             this->next=NULL;
//         };
//     };

//     Node* convertTOLL(int arr[],int index,int size){
//         if(index==size){
//             return NULL;
//         }
//         Node* temp= new Node(arr[index]);
//         temp->next=convertTOLL( arr,index+1,size);
//         return temp;
//     }
//     void print(Node* &temp){
     
//     }
// int main(){

//     int arr[]={1,2,4,6,7,8};
//     int size=6;
//     int index=0;
//     Node *head= convertTOLL(arr,index,size);
//     Node* temp = head;
//     Node* temp2 = head;
//     // int count = 0;
//     while(temp){
//         // count++;

//         temp=temp->next;
//         if(temp->next==NULL){
//             count/=2;

//         }
//     }

    
//     return 0;

// }