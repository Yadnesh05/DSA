#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue <int> q;
    q.push(17);
    q.push(21);
    q.push(44);
    q.push(57);
    cout<<q.size()<<endl;
    q.pop();
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    //cout<<q.rear()<<endl;

}