//Insertion at Start.
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
// ListNode* insertion(ListNode* head,int n){
//     ListNode* temp = new ListNode(n);
//     if(head == NULL){
//         head = new ListNode(n);
//     }
//     temp->next = head;
//     head->prev = temp;
//     head = temp;
//     return head;
// }
// int main(){
// ListNode* head;
// int arr[] = {1,2,3,4,4,3,2,1};
// head = createDLL(arr,0,8,NULL);
// ListNode* temp = head;
// cout<<"Linked List is  : "<<endl;
// while(temp){
//     // cout<<temp->prev<<" ";
//     cout<<temp->val<<" ";
//     // cout<<temp->next<<endl;
//     temp = temp->next;
// }
// cout<<endl;
// int n;
// cout<<"Enter the value of New Node : ";
// cin>>n;
// head = insertion(head,n);
// cout<<"New Linked List is  : "<<endl;
// temp = head;
// while(temp){
//     // cout<<temp->prev<<" ";
//     cout<<temp->val<<" ";
//     // cout<<temp->next<<endl;
//     temp = temp->next;
// }
// return 0;

// }

//Insertion at End.

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
// ListNode* insertionEnd(ListNode* head,int n,int x){
//     ListNode* temp = new ListNode(n);
//     if(head == NULL){
//         head = new ListNode(n);
//     }
//     ListNode* curr = head;
//     x--;
//     while(x--){
//         curr = curr->next;
//     }
//     curr->prev->next = temp;
//     temp->prev = curr->prev;
//     temp->next = curr;
//     curr->prev = temp;
//     // curr->next = temp;

//     temp->prev = curr;
    
    
//     return head;
// }
// int main(){
// ListNode* head;
// int arr[] = {1,2,3,4,4,3,2,1};
// head = createDLL(arr,0,8,NULL);
// ListNode* temp = head;
// cout<<"Linked List is  : "<<endl;
// while(temp){
//     // cout<<temp->prev<<" ";
//     cout<<temp->val<<" ";
//     // cout<<temp->next<<endl;
//     temp = temp->next;
// }
// cout<<endl;
// int n;
// cout<<"Enter the value of New Node : ";
// cin>>n;
// int x;
// cout<<"Enter the Index Of the Node : ";
// cin>>x;
// head = insertionEnd(head,n,x);
// cout<<"New Linked List is  : "<<endl;
// temp = head;
// while(temp){
    
//     cout<<temp->val<<" ";
    
//     temp = temp->next;
// }
// return 0;

// }

// Insertion at Particular Point

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
ListNode* insertionParticular(ListNode* head,int n,int x){
    ListNode* temp = new ListNode(n);
    
    ListNode* curr = head;
    if(x==0){
        if(head == NULL){
        head = new ListNode(n);
    }else{
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    }else{
        
    while(--x){
        curr = curr->next;
    }
    if(curr->next == NULL){
        ListNode* temp = new ListNode(n);
        temp->prev = curr;
        curr->next = temp;
    }else{
        ListNode* temp = new ListNode(n);
        temp->next = curr->next;
        temp->prev = curr;
        curr->next = temp;
        temp->next->prev = temp;
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
    // cout<<temp->prev<<" ";
    cout<<temp->val<<" ";
    // cout<<temp->next<<endl;
    temp = temp->next;
}
cout<<endl;
int n;
cout<<"Enter the value of New Node : ";
cin>>n;
int x;
cout<<"Enter the Index Of the Node : ";
cin>>x;
head = insertionParticular(head,n,x);
cout<<"New Linked List is  : "<<endl;
temp = head;
while(temp){
    
    cout<<temp->val<<" ";
    
    temp = temp->next;
}
return 0;

} 