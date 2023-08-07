#include<iostream>
using namespace std;

bool IsSorted(int arr[],int n){
    if(n==0 || n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }else{
        return IsSorted(arr+1,n-1);
    }
}
int sum(int arr[],int n){
    if(n==0){
        return 0;
    }
    int ans=arr[0];
    ans=ans+sum(arr+1,n-1);
    return ans;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    /*if(IsSorted(arr,n)){
        cout<<"Sorted";
    }else{
        cout<<"not sorted";
    }*/
    cout<<"sum is "<<sum(arr,n);
}