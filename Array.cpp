#include<iostream>
using namespace std;


//array with function
    void PrintingArray(int arr[], int size){

        cout<<"Printing the Array: "<<endl;

        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl<<"Printing Done "<<endl<<endl;
    }

    int main(){
        int n=15;
        int Arr[15]={1};
    PrintingArray(Arr,15);

         n=10;
        int  Ar[10]={0};
    PrintingArray(Ar,10);

        n=10;
         int A[10]={2};
    PrintingArray(A,10);

    int size= sizeof(A)/sizeof(int);
    cout<<"Size of a is ="<<size;





    return 0;
}