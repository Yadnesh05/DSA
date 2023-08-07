#include<iostream>
using namespace std;

int climb(long n){
    if(n==0){
        return 1;
    }if(n<0){
        return 0;
    }
    int ans=climb(n-1)+climb(n-2);
    return ans;
}
int main(){
    long n;
    cin>>n;
    cout<<climb(n)<<endl;
}