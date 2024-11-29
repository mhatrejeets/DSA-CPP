#include<iostream>
#include <string>
using namespace std;
class stack{
    public:
    int top;
    int size;
    char *arr;
};

int  length(string str){
    int i=0;
    int count=0;
    while(str[i]!='\0'){
        count++;
        i++;
    }
    return count;
}

int isEmpty(stack * sp){
    if(sp->top==-1){
        return 1;
    }
    return 0;
}

int peek(stack *sp, int index){
    // cout<<"Peek operations -";
    char a=sp->top - index +1;
    if(a<0){
        return -999;
    }
    return sp->arr[a];
}

int isFull(stack *sp){
    if(sp->top==sp->size-1){
        return 1;
    }
    return 0;
}

void pop(stack *sp){
    if(isEmpty(sp)==1){
        cout<<"Stack underflow so it is not possible to remove any element."<<endl;
    }
    else{
        char value = sp->arr[sp->top];
        sp->top--;
        cout<<"The value "<<value <<"stored at position "<<sp->top+1<<"is poped. "<<endl;

    }
}

void display(stack *sp){
    cout<<"The instructions in stack are as follows "<<endl;
    for(int i=sp->top;i>=0;i--){
        cout<<i<<" . "<<sp->arr[i]<<endl;
    }
}

void push(stack *sp, char value){
    if(isFull(sp)==1){
        cout<<"Stack overflow so it is not possible to add any element. "<<endl;
    }
    else{
        sp->top++;
        sp->arr[sp->top]=value;
        cout<<"The value "<<value<<" is pushed at the "<<sp->top<<" position."<<endl;
    }


}

int parenthesis (string * str){
    stack * sp = new stack;
    sp->arr = str;
    for(int i=0;sp->arr[i]!= '\0';i++){
        if(sp-> arr[i]== '('){
            push(sp,'(');
        }
        else if(sp-> arr[i]==')'){
            if(isEmpty(sp)==1){
                return 0;
            }
            else{
                pop(sp);
            }
        }
    }

    if(isEmpty == 0){
        return 0;
    }
    return 1;
}

int main(){
    string *str;
    cout<<"Enter expression :";
  cin>>*str;
    

  
  if(parenthesis(str)==0){
    cout<<"Not matched. ";
  }
  else {
    cout<<"Matched.";
  }
 
delete sp;
return 0;
}