#include<iostream>
using namespace std;

bool LinearSearch(int arr[],int size,int key){
    //int key;
    cout<<"Enter the key which you want to search:"<<endl;
    cin>>key;

    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
            
        }
    }
    return 0;

}

int main(){
    int n;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key,i;
    // cout<<"Enter the key which you want to search:"<<endl;
    // cin>>key;

    bool found=LinearSearch(arr,n,key);
    if(found){
        cout<<"Key is present "<<endl;
    }
    else{
        cout<<"Key is absent";
    }
}