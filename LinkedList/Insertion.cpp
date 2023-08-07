#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        this->next=NULL;

    }
};
void InsertAtHead(int value, Node *&head){
    Node *temp=new Node(value);
    temp->next=head;
    head=temp;
}
void InsertAtTail(int value,Node* &head){
    Node *temp=new Node(value);
    if(head==NULL){
        temp=head;
        
    }else{
        Node *cur=head;
        while(cur->next!=NULL){
            cur=cur->next;

            
        }
        cur->next=temp;
    }
    

}
// void InsertAtTail(int value,Node *&tail){
//     Node *temp=new Node(value);
//     tail->next=temp;
//     tail=tail->next;
// }
void print(Node *head){
    Node *cur=head;
    for(cur=head;cur!=NULL;cur=cur->next){
        cout<<cur->data<<endl;
    }
}

int main(){
    Node *head=NULL;
    
    InsertAtHead(20,head);
    InsertAtHead(10,head);
    InsertAtHead(30,head);
    InsertAtTail(40,head);
    print(head);

}