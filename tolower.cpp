#include<iostream>
using namespace std;
int  length(string str){
    int i=0;
    int count=0;
    while(str[i]!='\0'){
        count++;
        i++;
    }
    return count;
}
string toLower(string str){
    int len=length(str);
    for(int i=0;i<len;i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+('a'-'A');
        }
    }
    return str;
}
int main(){
    cout<<"Enter any string in upper case "<<endl;
    string str;
    cin>>str;
    string result =toLower(str);
    cout<<"String is "<<result;
    return 0;

}