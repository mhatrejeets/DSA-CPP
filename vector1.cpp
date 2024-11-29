#include<iostream>
#include<vector>
using namespace std;

void display (vector<int> &v1){
    for(int i=0;i<v1.size();i++){
       cout<< v1[i];
    } 
}

int main(){
    vector <int> v1;
    int size =4;

    for(int i=0;i<size;i++){
        v1.push_back(i);
    } 

      for(int i=0;i<v1.size();i++){
       cout<< v1[i];
    } 
    cout<<"\n";
    v1.pop_back();

    for(int i=0;i<v1.size();i++){
       cout<< v1[i];
    } 
    vector<int> :: iterator iter = v1.begin();
    v1.insert(iter+2 , 5, 10);
    cout<<"\n";
    display(v1);



}