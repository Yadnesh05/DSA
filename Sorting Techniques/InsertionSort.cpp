#include<iostream>
using namespace std;

int main(){
    int n;
    int j;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=1;i<n;i++){
        int temp=arr[i];
        for(j=i-1;j>=0;j++){
            if(arr[j]>temp){
                //shift
                arr[j+1]=arr[j];
            }else{
                break;
            }
        }
        arr[j+1]=temp;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}