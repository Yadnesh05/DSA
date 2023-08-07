#include<iostream>
using namespace std;

void update(int **ptr){
    //ptr=ptr+1;

    //*ptr=*ptr+1;

    //**ptr=**ptr+1;


}
int main(){

    int i=5;
    int *ptr=&i;
    int **ptr1=&ptr;

    // cout<<" value of ptr"<<ptr<<endl;
    // cout<<" address of ptr"<<ptr1<<endl;

    cout<<"before "<<i<<endl;
    cout<<"before "<<ptr<<endl;
    cout<<"before "<<ptr1<<endl;

    update(ptr1);
    cout<<"after "<<i<<endl;
    cout<<"after "<<ptr<<endl;
    cout<<"after "<<ptr1<<endl;




}
