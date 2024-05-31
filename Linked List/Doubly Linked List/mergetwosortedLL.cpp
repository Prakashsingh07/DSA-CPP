#include<iostream>
#include<string.h>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(int data){
        val=data;
        next=NULL;
    }
};
ListNode* createLL(int arr[],int index,int n){
    if(index==n){
        return NULL;
    }
    ListNode* temp = new ListNode(arr[index]);
    temp->next = createLL(arr,index+1,n);
    return temp;
}
ListNode* mergeTwoSortedLL(ListNode*head1,ListNode*head2){
        ListNode* head = new ListNode(0);
       ListNode* tail = head;
       while(head1 && head2){
        if(head1->val <= head2->val){
            tail->next = head1;
            head1 = head1->next;
            tail = tail->next;
            tail->next = NULL;
        }else{
            tail->next = head2;
            head2 = head2->next;
            tail = tail->next;
            tail->next = NULL;
        }
       } 
       if(head1){
        tail->next = head1;
       }else{
        tail->next = head2;
       }
       tail = head;
       head = head->next;
       delete tail;
       return head;
    }

int main(){
ListNode* head1;
ListNode* head2;
ListNode* head;
int arr[] = {2,2,3,3,5,5};
int arr1[]={3,4,6,7,8,9,9,10,11};
head1 = createLL(arr,0,6);
head2 = createLL(arr1,0,9);
ListNode* temp = head1;
ListNode* temp1 = head2;
cout<<"Linked List is  : "<<endl;
while(temp){
    
    cout<<temp->val<<" ";
    
    temp = temp->next;
}
cout<<endl;
while(temp1){
    
    cout<<temp1->val<<" ";
    
    temp1 = temp1->next;
}
cout<<endl;
head = mergeTwoSortedLL(head1,head2);
cout<<"New Linked List is  : "<<endl;
temp = head;
while(temp){
    
    cout<<temp->val<<" ";
    
    temp = temp->next;
}
return 0;

return 0;

}