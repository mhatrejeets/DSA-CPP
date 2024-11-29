#include<iostream>
using namespace std;
class LinearSearch{
public:
void linsearch(){
cout<<"Enter the size of array";
    int size;
    cin>>size;
    int arr[size-1];
    cout<<"Enter the elements of the array :";
    for(int i=0;i<size;i++){
        cout<<"\n Element "<<i<<":";
        cin>>arr[i];
    }
    cout<<"\n Enter the key:";
    int key;
    cin>>key;
    int flag =-1;
    for(int i =0; i<size; i++){
      if(arr[i]==key){
        flag = i;
      }
    }

    cout<<"The key is present at index : "<<flag;
}
};

int main(){
    LinearSearch l1;
    l1.linsearch();
    return 0;
}