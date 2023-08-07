#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    //destructor
    ~Node(){
        int value=this->data;
        //memory free
        if(this->next != NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory is freed for node with data "<< value <<endl;
    }
};
void InsertAtHead(int value,Node* &head){ 
    Node *temp=new Node(value);
    temp->next=head;
    head=temp;
}
void InsertAtTail(int value,Node * &head){
    Node* temp=new Node(value);
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
void InsertAtPosi(int value,Node* &head,int posi){
    Node* temp=head;
    int cnt=1;
    while(cnt<posi-1){
        temp=temp->next;
        cnt++;
    }
    Node *nodeToIns=new Node(value);
    nodeToIns->next=temp->next;
    temp->next=nodeToIns;
}
void deleteNode(int posi,Node* &head){
    //deleting for first node
    if(posi==1){
        Node *temp=head;
        head=head->next;
        //free memory for start node

        delete temp;
    }else{
        Node *curr=head;
        Node *prev=NULL;
        int cnt=1;
        while(cnt<posi){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
    
}

void print(Node *head){
    Node *cur=head;
    for(cur=head;cur!=NULL;cur=cur->next){
        cout<<cur->data<<endl;
    }
}
int  main(){
    
    // Node *node1=new Node(10);
    // Node *node2=new Node(20);
    // Node *node3=new Node(30);
    // Node *node4=new Node(40);
    Node *head=NULL;
    InsertAtHead(10,head);
    InsertAtHead(20,head);
    InsertAtHead(30,head);
    InsertAtTail(100,head);
    InsertAtPosi(22,head,2);
    print(head);
    deleteNode(5,head);
    print(head);

}