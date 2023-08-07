#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void InsertNode(Node* &tail,int element,int value){
    //if list is empty
    if(tail==NULL){
        Node *newNode=new Node(value);
        tail=newNode;
        newNode->next=newNode;
    }else{
        //if ist is not empty
        //if element is present in the list 
        Node *curr=tail;
        while(curr->data != element){
            curr=curr->next;
        }
        //create new node to be inserted
        Node *temp=new Node(value);
        temp->next=curr->next;
        curr->next=temp;
    }
}

void print(Node* tail){
    Node *temp=tail;
    do{
        cout<<tail->data<<endl;
        tail=tail->next;
    }while(tail!=temp);  
}
int main(){
    Node *tail=NULL;
    InsertNode(tail,10,2);
    InsertNode(tail,2,3);
    InsertNode(tail,2,22);
    print(tail);
   


}