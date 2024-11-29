#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n-1];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the key"<<endl;
    int key;
    cin>>key;
            int start=0;
       int end= n-1;
   
    while(end==0){
        int mid=(start + end)/2;
        if(mid==key){
        cout<<mid;
        }
        else if(mid>key){
            end=(mid-1);
        }
        else if(mid<key){
            start=(mid+1);
        }
    }
    
    
    return 0;
}
     