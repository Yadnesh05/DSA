#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    //constructor;
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;

        }
        cout<<"Memory freed for data "<<value<<endl;
    }
};
void print(Node* head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    
}
void InsertAtHead(Node* &head,int value){
    Node *temp=new Node(value);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void InsertAtTail(Node* &tail,int value){
    Node *temp=new Node(value);
    tail->next=temp;
    temp->prev=tail;    
    tail=temp;
}

void InsertAtPosi(Node* &head,int posi,int value){
    Node *newnode=new Node(value);
    int cnt=1;
    Node *temp=head;
    while(cnt<posi){
        temp=temp->next;
        cnt++;
    }
    newnode->next=temp->next;
    temp->next->prev=newnode;
    temp->next=newnode;
    newnode->prev=temp;

}
void deletion(int posi,Node* &head){
    if(posi==1){
        Node *temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }else{
        Node *cur=head;
        Node *prev=NULL;
        int cnt=1;
        while(cnt<posi){
            prev=cur;
            cur=cur->next;
            cnt++;
        }
        cur->prev=NULL;
        prev->next=cur->next;
        cur->next=NULL;
        delete cur;
    }

}


int lengthOfList(Node* head){
    int len=0;
    Node *temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
int main(){
    Node *node1=new Node(10);
    Node *head=node1;
    Node *tail=node1;
    InsertAtHead(head,20);
    
    //print(head);
    InsertAtTail(tail,30);
    //print(tail);
    //cout<<lengthOfList(head)<<endl;
    InsertAtPosi(head,2,22);
    InsertAtPosi(head,3,33);
    //print(head);
    deletion(3,head);
    //deletion(1,head); 
    print(head);

}