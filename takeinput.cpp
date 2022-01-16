#include<iostream>
#include"nodeclass.cpp"
using namespace std;

node*takeinput(){
    int data;
    cin>>data;
    node*head=NULL;
    node*tail=NULL;
    while (data!=-1)
    {
      node*newnode=new node(data); //new node is created dynamically so that new node deallocate after it work
      if(head==NULL){
          head=newnode;
          tail=newnode;
      }
      else{ 
          tail->next=newnode;

           tail=tail->next;                                           /*
                                                        node*temp=head;
                                                          while( temp->next!=NULL)
                                                        { 
                                                            temp=temp->next;
                                                        }
                                                             //   temp->next=newnode; */
      }
    cin>>data;

          
          
    }
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
node*head=takeinput();
print(head);

}
