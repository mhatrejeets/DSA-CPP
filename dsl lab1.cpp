#include<iostream>
using namespace std;
int main(){
    char a = 'A';
    for(int i=1;i<14;i++){
        if(i%2 !=0){
        for(int k=1;k<=(6-(i/2));k++){
            cout<<" ";
        }
        for(int j=0; j<i;j++){
            
            cout<<a;

        
             a++;
        }
        cout<<"\n";
        a='A';
        }
    }

    return 0;
}