#include<iostream>
using namespace std;

void Reverse(int arr[],int n){
    cout<<"Reverse Array is :"<<endl;
   for(int i=0;i<n;i++){
        swap(arr[i],arr[i++]);
   }
   /*if not use swap function 
     then swap using third veriable
     like 
        temp=a[i];;
        a[i]=a[i++];
        a[i++]=temp; */
//    for(int i=0;i<n;i+=2){       //every 3rd element swap

//         swap(arr[i],arr[i++]);
//    }
   
    
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