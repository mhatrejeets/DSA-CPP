#include<iostream>
#include<cmath>
using namespace std;
int b2d(int bin);
int main(){
    int bin;
    cout<<"ENter any number "<<endl;
    cin>>bin;
    cout<<"The decimal number is "<<b2d(bin);
    return 0;
}
int b2d(int bin){
    int ld,dec=0,i=0;
    
    while(bin>0){
        
        ld=bin%10;
        int j=ld*(pow(2,i));
        dec=dec+j;
        i++;
        bin=bin/10;
    }
    return dec;
}