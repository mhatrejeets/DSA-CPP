#include<iostream>
using namespace std;
int *input(int arr[],int size){
    cout<<"Enter the elements of the array : \n";
    for(int i=0;i<size;i++){
        cout<<"Element : "<<i+1<<": ";
        cin>>arr[i];
    }
    return arr;
}

int *selection_sort(int * ptr, int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(ptr[i]>ptr[j]){
                int temp = ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=temp;
            }
        }
    }
    return ptr;
}

int * display( int * ptr, int size){
    cout<<"The array is :\t";
     for(int i=0;i<size;i++){
        cout<<ptr[i]<<"\t";
    }
    return ptr;
}

int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size];
    int*ptr =input(arr,size);
    ptr = display(ptr,size);
    ptr=selection_sort(ptr,size);
    ptr = display(ptr,size);
    return 0;
}