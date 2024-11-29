#include<iostream>
#include<string>
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
int countVowels(string str){
    int len =length(str);
    int count=0;
    for(int i=0;i<len;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'
        ||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            count++;
        }
    }
    return count;
}
int main(){
    cout<<"Enter the string :";
    string str;
    cin>>str;
    cout<<"The umber of vowels in the string are "<<countVowels(str);
    return 0;
}