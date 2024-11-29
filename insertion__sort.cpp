#include<iostream>
using namespace std;
class c{
    public:
    int size;
    void insertion_sort(){
        
        cout<<"Enter the size of array: ";
        cin>>size;
        int arr[size];
        for(int i=0;i<size;i++){
            cout<<"\n Element :";
            cin>>arr[i];
        }
    

    
        for(int i=1;i<size;i++){
            int curr = arr[i];
            int j= i-1;
            while(arr[j]>curr && j>=0){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=curr;
        }
    

        cout<<"The sorted array is :\n";
        for(int i=0;i<size;i++){
            
            cout<<arr[i]<<" ";
           
        }
    }
    
    
};

int main(){
    c c1;
    c1.insertion_sort();
    return 0;
    
}