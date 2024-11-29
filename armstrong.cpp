#include <iostream>
using namespace std;
int main(){
    int num,ld,a , arm=0;
    cout<<"Enter number "<<endl;
    cin>>num;
    a=num;
    while(num>0){
        ld=num%10;
        arm=arm+(ld * ld *ld);
        num=num/10;
    }
    if(arm==a){
        cout<<"The number is a armstrong no"<<endl;
    }
    else{
        cout<<"no"<<endl;

    }
    return 0;
}