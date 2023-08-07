#include<iostream>
using namespace std;

bool BinarySearch(int arr[],int n,int s,int e,int key){
    
    int mid=(s+e)/2;
    if(s>e){
        return false;
    }
    if(key==arr[mid]){
        return true;
    }
    if(key>arr[mid]){
        return BinarySearch(arr,n,mid+1,e,key);
    }else{
        return BinarySearch(arr,n,s,mid-1,key);
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
    int s=arr[0];
    int e=arr[n-1];

    if(BinarySearch(arr,n,s,e,key)){
        cout<<"Element Found "<<endl;

    }else{
        cout<<"Element not found "<<endl;
    }
}