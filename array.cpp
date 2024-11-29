#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The elements of the array are "<<endl;
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}