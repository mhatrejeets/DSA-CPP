#include<iostream>
using namespace std;
class myclass{
    public:
    int size;
    int key;
    int arr[20];
    int z,i;
    void set(){
        cout<<"Enter the size of array ";
        cin>>size;
        cout<<endl<<"Enter the elements of array ";
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
        cout<<endl<<"Enter the key ";
        cin>>key;
    }
    void linear(){
        for( i=0;i<size;i++){
            if(arr[i]==key){
                z=1;
            }

        }
    }
    void check (){
        if (z == 1){
            cout<<"The key is present at inedex "<<i;
        }
        else{
            cout<<"The key is not present";
        }
    }
};
int main(){
    myclass c;
    c.set();
    c.linear();
    c.check();
    return 0;
    
}