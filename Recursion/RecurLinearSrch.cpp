#include<iostream>
using namespace std;

bool linearSearch(int arr[],int n,int key){
    if(n==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }else{
        return linearSearch(arr+1,n-1,key); 
    }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    if(linearSearch(arr,n,key)){
        cout<<"Element Found "<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }
}