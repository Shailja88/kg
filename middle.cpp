#include<bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node* next;
    Node(int value){
        val=value;
    }
};
// Node* mid_of_linkList(Node* head){
//      if(!head || !head->next)return head;
//      Node* slow=head;
//      Node* fast=head;
//      while(fast && fast->next){
//         slow=slow->next;
//         fast=fast->next->next;
//      }
//     return slow;
// }
Node* mid_of_linkList(Node* head){
    if(!head || !head->next)return head;
Node* temp=head;
int size=0;
while(temp){
 size++;
 temp=temp->next;
}
temp=head;
size=size/2;
while(size--){
    temp=temp->next;
}
return temp;
}
int main(){
    Node* curr=new Node(1);
    Node* temp=curr;
    for(int i=2;i<=10;i++){
        temp->next=new Node(i);
        temp=temp->next;
    }
    temp=curr;
  Node* middle=mid_of_linkList(temp);
  cout<<middle->val<<endl;
}