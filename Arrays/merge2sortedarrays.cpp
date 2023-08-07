#include<iostream>
using namespace std;

void merge(int arr1[],int arr2[],int m,int n,int arr3[]){
    int i=0,j=0,k=0;
    while(i<n && j<m){ 
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;
        }else{
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }

    //copy first array k elements ko
    while(i<n){
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    //copy second array k elements 
    while(j<m){
        arr3[k]=arr2[j];
        j++;
        k++;
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    int arr1[n];
    int arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int arr3[m+n];
    merge(arr1,arr2,m,n,arr3);

    for(int i=0;i<n+m;i++){
        cout<<arr3[i]<<" ";
    }


}    