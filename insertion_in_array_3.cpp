    #include<iostream>
using namespace std;
class myclass{
    public:
    int size=7 , element=6 ,index, capacity=20;
    int arr[20]={1,3,4,5,7,9,10};
    void find_index(){
        int start=0 , mid,end=6;
        for(int i=start;i<=end;i++){
        mid=(start+end)/2;
        if(arr[i]>mid){
            start=mid+1;
        }
        else{
            end=mid;
        }
        }
        index=mid+1;
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
            for(int i=size-1;i>=index;i--){
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
    a.find_index();
    a.display();
    a.insert();
    a.insert_1();
    a.display();
    return 0;
}