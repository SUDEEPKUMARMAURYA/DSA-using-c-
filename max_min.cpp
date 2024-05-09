#include<iostream>
using namespace std;

    int getmax(int num[],int n){
        
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,num[i]);
            // if(num[i]>max){
            //     max=num[i];
            // }
            
        }
        return maxi;
    }
    int getmin(int num[],int n){
        
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            // if(num[i]<min){
            //     min=num[i];
            // }
            mini=min(mini,num[i]);
        }
        return mini;
    }


int main(){

    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The Array is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"Max value is "<<getmax(arr,n)<<endl;
    cout<<"Min value is "<<getmin(arr,n)<<endl;








    return 0;
}