#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v1;
    int size =4;

    for(int i=0;i<size;i++){
        v1.push_back(i);
    } 

      for(int i=0;i<size;i++){
       cout<< v1[i];
    } 
    cout<<"\n";
    v1.pop_back();

    for(int i=0;i<size;i++){
       cout<< v1[i];
    } 



}