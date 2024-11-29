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

void frequency(string str){
    int len=length(str);
    cout<<"\n Enter the character :";
    char c;
    cin>>c;
    int f_count =0;
    int i=0;
    while(str[i]!='\0'){
        if(str[i]== c){
            f_count ++;
        }
        i++;
    }
    cout<<"\n The frequency of character "<<c<<" is "<<f_count<<endl;

}

void delete_index(string str){
    int index;
    cout<<"\n Enter the index ";
    cin>>index;
    int leng =length(str);
    char arr[leng];
    int j=0;
    for(int i=0;i<leng;i++){
        if(index!= i){
            arr[j]=str[i];
            j++;
        }
    }
 cout<<"\n The array without the index "<< index <<" is : \n";
     for(int i=0;i<leng;i++){
        cout<<arr[i];
    }

}

void chardelete(string str){
    char c;
    cout<<"\n Enter the character ";
    cin>>c ;
    int leng =length(str);
    char arr[leng];
    int j=0;
    for(int i=0;i<leng;i++){
        if(str[i]!=c){
            arr[j]=str[i];
            j++;
        }
    }
 cout<<"\n The array without the character "<< c <<" is : \n";
     for(int i=0;i<leng;i++){
        cout<<arr[i];
    }

}

void checkPalindrome(string str){
    int i,j;
    int len=length(str);
    int mid=len/2;
    for( i=0, j=len-1;i<=mid;i++,j--){
    if(str[i] !=str[j]){
        cout<<"\n It is not a palindrome \n "<<endl;
        break;

}
    }
    if(i==(mid+1)){
        cout<<" \n String is a palindrome \n ";
    }
}

int main(){
string str;
cout<<"\n Enter the string to check for palindrome ";
cin>>str;
cout<<"\n The length of the string is : ";
cout<<length(str)<<endl;
checkPalindrome(str);
frequency(str);
chardelete(str);
delete_index(str);
return 0;

}