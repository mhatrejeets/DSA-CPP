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
    int sum=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            cout<<sum <<" ";
        }
    }
    // cout<<"The sum is "<< sum;
    // cout<<"The elements of the array are "<<endl;
    //   for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    return 0;

}