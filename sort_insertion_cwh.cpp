#include<iostream>
using namespace std;
int *input(int arr[],int size){
    cout<<"\n Enter the elements of the array : ";
    for(int i=0;i<size;i++){
        cout<<"\nElement : "<<i<<" : ";
        cin>>arr[i];
    }
    return arr;
}

int * display(int * ptr, int size){
    cout<<"\nThe array is : ";
    for(int i=0;i<size;i++){
        cout<<ptr[i]<<"\t";
    }
    return ptr;
}

int * insertion_sort(int * ptr, int size){
    for(int i=0;i<size;i++){
        int curr =ptr[i];
        int j= i-1;

        while(ptr[j]>curr && j>=0 ){
            ptr[j+1]=ptr[j];
            j--;
        }

        ptr[j+1]=curr;
    }
    return ptr;

}

int main(){
    cout<<"\nEnter the size of the array";
    int size;
    cin>>size;
    int arr[size];
    int * ptr= input(arr,size);
    ptr = display(ptr,size);
    ptr = insertion_sort(ptr,size);
    ptr = display(ptr,size);

    return 0;
}