#include<iostream>
using namespace std;
class myclass{
    public:
    int tSize;
    int uSize;
    int *arr;

    void create(int totalsize, int usedsize){
        tSize= totalsize;
        uSize=usedsize;
        arr= new int[tSize];
    }

    void setVal(){
        for(int i=0;i<uSize;i++){
            cout<<"Enter the "<<i+1<<" th element ";
            cin>>arr[i];
        }
    }
    void display(){
        cout<<"The array is as follows  "<<endl;
        for(int i=0;i<uSize;i++){
            
            cout<<arr[i]<<"\t";
        }
    }
};
int main(){
    myclass a;
    a.create(10,4);
    a.setVal();
    a.display();
    return 0;    
}