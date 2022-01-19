#include<iostream>
#include"nodeclass.cpp"
using namespace std;
node*takeinput(node*head)
{
    int data;
    cin>>data;
    head=NULL;
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
int length(node*head){
int count=0;
while(head){
    count++;
    head=head->next;
    
}
return count;
}
node*append(node*head,int n){

    int i=0;
   // int len=length(head);
  node*temp=head;
  node*tail=head;
  for(int i=1;i<length(head)-n;i++) {
      temp=temp->next;
  }
  // node*q=temp;
  for(int i=1;i<length(head);i++)
  {
   tail=tail->next;
  }
  tail->next=head;
  head=temp->next;
  temp->next=NULL;
 return head;
}
void print(node*head){
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}


int main(){
node*head=takeinput(head);
print(head);
int n;
cout<<"enter N:";
cin>>n;
head=append(head,n);
print(head);

}
