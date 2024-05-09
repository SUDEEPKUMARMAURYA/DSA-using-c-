#include<iostream>
using namespace std;

void Sum_of_Array(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
}

int main(){
    
    int n;
    cout<<"Enter the size of Array :";
    cin>>n;

    int arr[n]; //or int arr[100];

    cout<<"Enter the elements of array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //   cout<<"The array is :"<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    cout<<endl<<"Sum of Array is"<<endl;
    Sum_of_Array(arr,n);

}