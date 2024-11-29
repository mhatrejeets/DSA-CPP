#include<iostream>
using namespace std;
int *input(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    return arr;
}

int main(){
    int size =10;
    int arr[size];
    int *ptr =  input(arr,size);
    for(int i=0;i<size;i++){
        cout<<ptr[i];
    }

    return 0;
}