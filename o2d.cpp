#include<iostream>
#include<cmath>
using namespace std;
int o2d(int oct);
int main(){
    int oct;
    cout<<"ENter any number "<<endl;
    cin>>oct;
    cout<<"The decimal number is "<<o2d(oct);
    return 0;
}
int o2d(int oct){
    int ld,dec=0,i=0;
    
    while(oct>0){
        
        ld=oct%10;
        int j=ld*(pow(8,i));
        dec=dec+j;
        i++;
        oct=oct/10;
    }
    return dec;
}