#include<iostream>
using namespace std;

void result(int z);
int main(){

    int num,z;
    cout<<"Enter number ";
    cin>>num;
    if(num==0){
    
        z=1;
    }
else if(num==1){
        z=1;
    
    }
else if(num==2){
        z=0;
    
    }
else{
    for(int i=2;i<num;i++){
        if(num%i==0){
            z=1;
        }
        else{
            z=0;
        }
    }
}

result(z);
return 0;
}
 void result(int z){
    if(z==0){
        cout<<"The given number is a prime number";
    }
    else if(z==1){
        cout<<"The given number is not a prime number";
    }
 }