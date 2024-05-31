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
ListNode* deleteDuplicates(ListNode* head) {
          if (head == nullptr || head->next == nullptr) {
            return head;  
        }
         ListNode* prev = head;
             ListNode* curr = head->next;
              while(curr){
            if(curr->val == prev->val){
                prev->next = curr->next;
                delete curr;
                curr = prev->next;
            }else{
                prev = curr;
                curr = curr->next;
            }
          }
        
          return head;
    }
int main(){
ListNode* head;
int arr[] = {2,2,3,3,5,5};
head = createLL(arr,0,6);
ListNode* temp = head;
cout<<"Linked List is  : "<<endl;
while(temp){
    
    cout<<temp->val<<" ";
    
    temp = temp->next;
}
cout<<endl;
head = deleteDuplicates(head);
cout<<"New Linked List is  : "<<endl;
temp = head;
while(temp){
    
    cout<<temp->val<<" ";
    
    temp = temp->next;
}
return 0;

}