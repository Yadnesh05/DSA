#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // int i=0;
    // int temp;
    // for(int j=0;j<n;j++){
    //     if(arr[j]!=0){
    //         temp=arr[j];
    //         arr[j]=arr[i];
    //         arr[i]=temp;
    //         i++;
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]!=0){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}    