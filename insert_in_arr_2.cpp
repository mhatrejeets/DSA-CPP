#include<iostream>
using namespace std;
class myclass{
    public:
    int size=5,element=6,capacity =10,index=2;
    int arr[15]={1,3,5,7,9};
    void insert(){
    arr[size]=arr[index];
    arr[index]=element;
    //size++;
    }


    void display(){
        cout<<"\n";
        for(int i=0;i<size;i++){
            cout<<arr[i]<<"\t";
        }
    } 
};
int main(){
    myclass a;
    a.display();
    a.insert();
    a.display();
    return 0;

}