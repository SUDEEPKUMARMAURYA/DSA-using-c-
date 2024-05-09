#include<iostream>
using namespace std;

    int LinearSearch(int arr[],int size){
        int i,key;
        cout<<"Enter the value to search: "<<endl;
        cin>>key;
        for(i=0;i<size;i++){
            if(arr[i]==key){
                return i; 
            }
        }
        return 1;
    }  
         
        
    

int main(){
    int i,n;
    cout<<"Enter the size of Array: ";
    cin>>n;

    int num[n];
    cout<<"Enter the elements of array: "<<endl;
    for(i=0; i<n; i++){
        cin>>num[i];
    }
     
    int found=LinearSearch(num,n);
    if(found){
        cout<<"Element found at index " <<i;
    }
    else{
        cout<<endl<<"Element not found";
    }   
}