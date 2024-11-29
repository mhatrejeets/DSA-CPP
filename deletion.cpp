#include<iostream>
using namespace std;
class myclass{
    public:
    int size=7;
    int index;
    int element;
    int arr[20];
    
    void set(){
        // cout<<"Enter the size of array ";
        // cin>>size;
        cout<<endl<<"Enter the index of deletion";
        cin>>index;
    }
    void set_arr(){
        cout<<"Enter the element s of the array";
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
    }
    void display(){
        cout<<"The array is as follows ";
         for(int i=0;i<size;i++){
            cout<<"\t"<<arr[i];
        }
    }
    void deletion(){
        for(int i=index;i<size-1;i++){
            arr[i]=arr[i+1];
        }
        size--;
    }

};
int main(){
    myclass c;
    c.set_arr();
    c.set();
    c.display();
    cout<<"\n";
    c. deletion();
    cout<<"\n";
    c.display();
    return 0;
}