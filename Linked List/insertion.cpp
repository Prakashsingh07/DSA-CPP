// Insertion at Start.
// #include<iostream>
// #include<string.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;
//     Node(int value){
//         data=value;
//         next=NULL;
//     }
// };
// int main(){
// Node *Head;
// Head=NULL;

// // Head= new Node(4);
// // cout<<Head->data<<endl;
// // cout<<Head->next<<endl;
// // cout<<endl;
// int arr[4]={1,2,3,4};
// for(int i=0;i<4;i++){
// if(Head==NULL){
//     Head=new Node(arr[i]);
// }else{
//     Node *temp;
//     temp=new Node(arr[i]);
//     temp->next=Head;
//     Head=temp;
// // cout<<temp->data<<endl;
// // cout<<temp->next<<endl;
// }
// }
// cout<<endl;
// Node *temp;
// temp=Head;
// while(temp!=NULL){
//     cout<<temp->data<<" ";
//     temp=temp->next;
// }

// return 0;

// }

//Instertion at End

// #include<iostream>
// #include<string.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;
//     Node(int n){
//         data=n;
//         next=NULL;
//     }
// };
// int main(){
// Node *head=NULL;
// Node *Tail=NULL;
// int arr[]={1,2,3,4};
// for(int i=0;i<4;i++){
//     if(head==NULL){
//         head=new Node(arr[i]);
//         Tail=head;

//     }else{
//         Tail->next= new Node(arr[i]);
//             Tail=Tail->next;
//         }
//     }
//     Node *temp;
//     temp=head;
//     while(temp){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// return 0;
// }


//Insertion at End Using Recursion.

// #include<iostream>
// #include<string.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;
//     Node(int n){
//         data=n;
//         next=NULL;
//     }
// };
// Node* createLinkedList(int arr[],int index,int n){
//     if(index==n){
//         return NULL;
//     }
//     Node* temp;
//     temp=new Node(arr[index]);
//     temp->next = createLinkedList(arr,index+1,n);
//     return temp;
// }
// int main(){
// Node* Head=NULL;
// int arr[]={1,2,3,9,10};
// Head = createLinkedList(arr,0,5);
// Node *temp;
//     temp=Head;
//     while(temp){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// return 0;
// }

//Insertion at the beginning using Recursion.

// #include<iostream>
// #include<string.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;
//     Node(int n){
//         data=n;
//         next=NULL;
//     }
// };
// Node* createLinkedList(int arr[],int index,int n,Node* prev){
//     if(index==n){
//         return prev;
//     }
//     Node* temp;
//     temp=new Node(arr[index]);
//     temp->next = prev;
//     return createLinkedList(arr,index+1,n,temp);
// }
// int main(){
// Node* Head=NULL;
// int arr[]={1,2,3,9,10};
// Head = createLinkedList(arr,0,5,Head);
// Node *temp;
//     temp=Head;
//     while(temp){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// return 0;
// }


//Insertion at any particular position

#include<iostream>
#include<string.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data=value;
        next=NULL;
    }
};
Node* createLL(int arr[],int index,int n){
         if(index==n){
        return NULL;
    }
    Node* temp;
    temp=new Node(arr[index]);
    temp->next = createLL(arr,index+1,n);;
    return temp;

}
int main(){
Node* Head;
Head=NULL;
int arr[]={1,2,3,4,5};
Head=createLL(arr,0,5);
int x=4;//Insert position.
int value=30;
Node*temp=Head;
x--;
while(x--){
    temp=temp->next;
};

Node* temp2=new Node(value);
temp2->next=temp->next;
temp->next=temp2;
temp=Head;
while(temp){
    cout<<temp->data<<" ";
    cout<<temp->next<<endl;
    temp=temp->next;
}
return 0;
}   