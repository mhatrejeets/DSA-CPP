#include<iostream>
using namespace std;
class c{
    public:
    int size;
    void selection_sort(){
        
        cout<<"Enter the size of array: ";
        cin>>size;
        int arr[size];
        for(int i=0;i<size;i++){
            cout<<"\n Element :";
            cin>>arr[i];
        }
    

    
        for(int i=0;i<size;i++){
            for(int j= i; j<size;j++){
                if(arr[j]<arr[i]){
                    int temp =arr[i];
                    arr[i]= arr[j];
                    arr[j]=temp;
                }
            }
        }
    

        cout<<"The sorted array is :\n";
        for(int i=0;i<size;i++){
            
            cout<<arr[i]<<" ";
           
        }
    }
    
    
};

int main(){
    c c1;
    c1.selection_sort();
    return 0;
    
}