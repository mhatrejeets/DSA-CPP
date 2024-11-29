#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size ";
    int n ;
    cin>> n ;
    int arr[n];
    int counter=1;
    cout<<"Enter the elements of array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    while(counter < n){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp;
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;

    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;


}