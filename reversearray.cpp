#include<iostream>
using namespace std;

void Reverse(int arr[],int n){
    cout<<"Reverse Array is :"<<endl;
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}

void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int m;
    cout<<"Enter the size of Array :";
    cin>>m;
    int arr[m];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    PrintArray(arr,m);
    Reverse(arr,m);
    PrintArray(arr,m);

}