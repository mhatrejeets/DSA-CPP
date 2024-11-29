#include<iostream>
using namespace std;
class myclass{
    public:
    int size=4 , element=6 ,index=2, capacity=20;
    int arr[20];
    void set(){
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }        
    }
    void display(){
        cout<<"\n";
        for(int i=0;i<size;i++){
            cout<<arr[i]<<"\t";
        }
    } 
    void insert (){
        if(size>=capacity){
            cout<<"Insertion not possible";
        }        
        else{
            for(int i=size;i>=index;i--){
                arr[i+1]=arr[i];
            }
            arr[index]=element;
        }
    }   
    void insert_1(){
        size++;
        
    }
};
int main(){
    myclass a;
    a.set();
    a.display();
    a.insert();
    a.insert_1();
    a.display();
    return 0;
}