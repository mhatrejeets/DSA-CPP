#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n-1];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the key"<<endl;
    int key;
    cin>>key;
    for(int j=0;j<n;j++){
        if(arr[j]==key){
           cout<<"Key found at index "<<j+1; 
            break;
        }
        else{
                cout<<"Key not found";
        }
    }
    return 0;
    }