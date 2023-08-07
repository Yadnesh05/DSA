#include<iostream>
using namespace std;

int firstocc(int n,int arr[],int key){
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
        
    }
    return ans;
}
int lastocc(int n,int arr[],int key){
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
        
    }
    return ans;
}
int main(){
    // int n,key;
    // cin>>n>>key;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    int even[5]={1,2,3,3,5};
    
    cout<<"Index for first occurrence is "<<firstocc(5,even,3)<<endl;
    cout<<"Index for last occurrence is "<<lastocc(5,even,3)<<endl;

}