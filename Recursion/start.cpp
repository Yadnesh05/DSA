#include<iostream>
using namespace std;

int factorial(int n){
    //base case
    if(n==0){
        return 1;
    }
    int chotti=factorial(n-1);
    int badi=n*chotti;

    return badi;
}
int power(int n){
    //base case
    if(n==0){
        return 1;
    }
    int chotti=power(n-1);
    int badi=2*chotti;
    return badi;
}
void counting(int n){
    //base
    if(n==0){
        return;
    }
    cout<<n<<endl;
    counting(n-1);
}
void path(int src,int dest){
    cout<<"source "<<src<<" destination "<<dest<<endl;
    if(src==dest){
        cout<<"reached "<<endl;
        return;
    }
    src++;
    path(src,dest);
}

int main(){
    int n,src,dest;
    //cin>>n;
    cin>>src>>dest;
    // int ans=factorial(n);
    // int pow=power(n);
    // cout<<"factorial is "<<ans<<endl;
    // cout<<"Power is "<<pow<<endl;
    // counting(n);
    path(src,dest);
}