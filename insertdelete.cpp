#include<iostream>
using namespace std;
#include"nodeclass.cpp"

 
 node*takeinput(){
     int data;
     cin>>data;
     node*head=NULL;
     node*tail=NULL;
     while(data!=-1)
     {
        node*newnode=new node(data);
        if(head==NULL){
            head=newnode;
            tail=newnode;

        }
        else{
            tail->next=newnode;
            tail=tail->next;
        }
        cin>>data;
    
     }
    
      return head;
     
 }
 
  void print(node*head){
    // node*temp=head;
     while(head!=NULL){
         cout<<head->data;
         head=head->next;
     }
     cout<<endl;
 }
   /*  int length(node*head){
         
     int count=0;
    while(head){
      count++;
       head=head->next;
    }
     return count;
 } */
 

 node* insertnode(node*head,int i,int data)

{
    node*newnode=new node(data);
    int count=0; 
    node*temp=head;
    
    if(i==0){
     newnode->next=head;
     head=newnode; 
     return head;     
    }


     while(temp!=NULL&&count<i-1)
     {
      temp=temp->next; // this will update temp and travel untill count is less thani-1
      count++;
     }
     if(temp!=NULL){
      node*a=temp->next; // pointer a will store the address of next node 
     newnode->next=a;
     temp->next=newnode;  
     }
     

return head;
}

node*deletenode(node*head,int j){
    node*temp=head;
    int count=0;
    if(j==0){
       node*p=head->next;
       head=p;
       return head;
       delete p;
    }
    while(temp!=NULL&&count<j-1){
        temp=temp->next;
        count++;
    }
    if(temp!=NULL){
      node*a=temp->next;
      node*b=a->next;
      temp->next=b;
      delete a;
      
    }
    return head;
}

 int main(){
     node*head=takeinput();
    print(head);
    int i,data;
     cout<<"enter positon and data";
     cin>>i>>data;
     cout<<endl;
    // cout<<length(head);
 head=insertnode(head,i,data);
print(head);
  int j;
  cout<<"enter position to delete";
  cin>>j;
  head=deletenode(head,j);
  print(head); 

 } 
