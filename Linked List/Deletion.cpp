// //Deleting First Node
// #include<iostream>
// #include<string.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int n){
//         data=n;
//         next=NULL;
//     }
// };
// Node* createLinkedList(int arr[],int index,int size){
//     if(index==size){
//         return NULL;
//     }
//     Node* temp = new Node(arr[index]);
//     temp->next=createLinkedList(arr,index+1,size);
//     return temp;
// }
// int main(){
// Node* Head=NULL;
// int arr[]={4,2,5,2,1};
// Head = createLinkedList(arr,0,5);
// //Deleting the node at start
// if(Head!=NULL){
//     Node* temp=Head;
//     Head=Head->next;
//     delete temp;
// }
// while(Head){
//     cout<<Head->data<<" ";
//     Head=Head->next;
// }
// return 0;
// }

//Deleting Last Node.

#include<iostream>
#include<string.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int n){
        data=n;
        next=NULL;
    }
};
Node* CreateLL(int arr[],int index,int size){
    if(index==size)
    return NULL;
    Node* temp;
    temp= new Node(arr[index]);
    temp->next=CreateLL(arr,index+1,size);
    return temp;
}
int main(){
Node* Head;
int arr[]={5,3,6,2,5};
Head=CreateLL(arr,0,5);
Node* temp=Head;
if(Head!=NULL){
    //only one Node is present
    if(Head->next==NULL){
        Node* temp=Head;
        delete temp;
        Head=NULL;
    } 
    //More than 1 node
    Node* curr=Head;
    Node* prev=NULL;
    while(curr->next!=NULL){
        prev = curr;
        curr = curr->next;
    }
    prev->next=curr->next;
    delete curr;
}

temp=Head;
while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
}

return 0;
}