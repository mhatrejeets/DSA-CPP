#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0; i<n;i++){
        cin>>arr[i];        
    }
for(int j=0;j<n;j++){
    for(int k=j+1;k<=n;k++){
        if(arr[k]<arr[j]){
            int temp;
            temp=arr[k];
            arr[k]=arr[j];
            arr[j]=temp;
        }
    }
}
cout<<"The required array is "<<endl;
for(int i=0; i<n;i++){
        cout<<arr[i];        
    }
return 0;
}