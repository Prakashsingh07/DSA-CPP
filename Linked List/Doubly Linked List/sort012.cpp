#include<iostream>
#include<string.h>
using namespace std;
class ListNode{
    public:
    int data;
    ListNode* next;
    ListNode(int val){
        data=val;
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
    ListNode* segregate(ListNode *head) {
        
        ListNode* curr = head;
        int count0 = 0;
        int count1 =0;
        int count2 =0;
        while(curr){
            if(curr->data==0){
                count0++;
            }else if(curr->data==1){
                count1++;
            }else{
                count2++;
            }
            curr = curr->next;
        }
        curr = head;
        while(count0--){
            curr->data = 0;
            curr = curr->next;
        }
        while(count1--){
            curr->data = 1;
            curr = curr->next;
        }
        while(count2--){
            curr->data = 2;
            curr = curr->next;
        }
        return head;
    }
int main(){
ListNode* head;
int arr[] = {1,0,2,0,2,1};
head = createLL(arr,0,6);
ListNode* temp = head;
cout<<"Linked List is  : "<<endl;
while(temp){
    
    cout<<temp->data<<" ";
    
    temp = temp->next;
}
cout<<endl;
head = segregate(head);
cout<<"New Linked List is  : "<<endl;
temp = head;
while(temp){
    
    cout<<temp->data<<" ";
    
    temp = temp->next;
}
return 0;

}