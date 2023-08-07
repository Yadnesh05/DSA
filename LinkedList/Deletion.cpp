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
    ~Node(){
        int value=data;
        if(this->next != NULL){
            delete next;
            next=NULL;
        }
    }
};
void deleteNode(int posi,Node* &head){
    if(posi==1){
        Node *temp=head;
        head=head->next;

        delete temp;
    }else{
        Node* curr=head;
        Node* prev=NULL;
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

int main(){
    Node *head=NULL;
}