#include<iostream>
using namespace std;

void update(int arr[],int n){
    cout<<"Array inside the function :"<<endl;
    arr[0]=120;//both array value change:
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Goto the main function -->"<<endl;
}



int main(){
    int arr[3]={1,2,3};
        //arr[0]=120; //same as above update
        update(arr,3);
        //arr[0]=120; //only main function array change
        cout<<"Printing the main function"<<endl;
        for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
        }

    return 0;
} 