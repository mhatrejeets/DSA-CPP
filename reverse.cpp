#include<iostream>
using namespace std;
int main(){
    int num,ld,rev=0,a;
    cout<<"Enter number"<<endl;
    cin>>num;
    a=num;
    while(num>0){
        ld=(num % 10);
        rev=(rev*10)+ld;
        num=num/10;

    }
    cout<<"The reverse of "<<a<<" is "<<rev<<endl;
    return 0; 
}