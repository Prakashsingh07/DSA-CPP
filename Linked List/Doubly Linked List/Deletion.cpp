//Deletion at Start..
// #include<iostream>
// #include<string.h>
// using namespace std;
// class ListNode{
//     public:
//     int val;
//     ListNode* next;
//     ListNode* prev;
//     ListNode(int data){
//         val=data;
//         next=NULL;
//         prev = NULL;
//     }
// };
// ListNode* createDLL(int arr[],int index,int n,ListNode* back){
//     if(index==n){
//         return NULL;
//     }
//     ListNode* temp = new ListNode(arr[index]);
//     temp->prev = back;
//     temp->next = createDLL(arr,index+1,n,temp);
//     return temp;
// }
// ListNode* Deletion(ListNode* head){
//     ListNode* temp = head;
//     if(head!=NULL){
//         head = head->next;
//         delete temp;
//         if(head){
//             head->prev = NULL;
//         }
//     }
    
   
    
    
    
//     return head;
// }
// int main(){
// ListNode* head;
// int arr[] = {1,2,3,4,5};
// head = createDLL(arr,0,5,NULL);
// ListNode* temp = head;
// cout<<"Linked List is  : "<<endl;
// while(temp){
    
//     cout<<temp->val<<" ";
    
//     temp = temp->next;
// }
// cout<<endl;
// head = Deletion(head);
// cout<<"New Linked List is  : "<<endl;
// temp = head;
// while(temp){
    
//     cout<<temp->val<<" ";
    
//     temp = temp->next;
// }
// return 0;

// } 


//Deletion at End

#include<iostream>
#include<string.h>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode* prev;
    ListNode(int data){
        val=data;
       next=NULL;
         prev = NULL;
    }
};
ListNode* createDLL(int arr[],int index,int n,ListNode* back){
    if(index==n){
        return NULL;
    }
    ListNode* temp = new ListNode(arr[index]);
    temp->prev = back;
    temp->next = createDLL(arr,index+1,n,temp);
    return temp;
}
ListNode* Deletion(ListNode* head){
    ListNode* temp = head;
    if(head!=NULL){
        if(head->next==NULL){
            delete head;
            head = NULL;
        }
       else{
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->prev->next = NULL;
        delete temp;
       }
    }
    
   
    
    
    
    return head;
}
int main(){
ListNode* head;
int arr[] = {1,2,3,4,5};
head = createDLL(arr,0,5,NULL);
ListNode* temp = head;
cout<<"Linked List is  : "<<endl;
while(temp){
    
    cout<<temp->val<<" ";
    
    temp = temp->next;
}
cout<<endl;
head = Deletion(head);
cout<<"New Linked List is  : "<<endl;
temp = head;
while(temp){
    
    cout<<temp->val<<" ";
    
    temp = temp->next;
}
return 0;

} 
 