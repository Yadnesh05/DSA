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
void print(Node *head){
    Node *cur=head;
    for(cur=head;cur!=NULL;cur=cur->next){
        cout<<cur->data<<endl;
    }    
}
int count(Node *head){
    int count=0;
    Node *cur=head;
    for(cur=head;cur!=NULL;cur=cur->next){
        count++;
    }
    return count;
}

int main(){
    Node *node1=new Node(10);
    
    Node *node2=new Node(20);
    
    print(node1);
    cout<<count(node1)<<endl;
}