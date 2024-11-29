#include<iostream>
using namespace std;
class stack{
    public:
    int top;
    int size;
    int *arr;
};

int isEmpty(stack * sp){
    if(sp->top==-1){
        return 1;
    }
    return 0;
}

int peek(stack *sp, int index){
    // cout<<"Peek operations -";
    int a=sp->top - index +1;
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
        int value = sp->arr[sp->top];
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

void push(stack *sp, int value){
    if(isFull(sp)==1){
        cout<<"Stack overflow so it is not possible to add any element. "<<endl;
    }
    else{
        sp->top++;
        sp->arr[sp->top]=value;
        cout<<"The value "<<value<<" is pushed at the "<<sp->top<<" position."<<endl;
    }


}

int main(){
    stack *sp=new stack;
    sp->top=-1;
    sp->size=10;
    sp->arr=new int[sp->size];
    if(isEmpty(sp)==1){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty. "<<endl;
    }

    if(isFull(sp)==1){
        cout<<"Stack is Full"<<endl;
    }
    else{
        cout<<"Stack is not full"<<endl;
    }

    push(sp,1);
     push(sp,2);
      push(sp,3);
       push(sp,4);
        push(sp,5);
         push(sp,6);
          push(sp,7);
           push(sp,8);
            push(sp,9);
             push(sp,10); push(sp,1);
             display(sp);
             cout<<"Peek "<<peek(sp,3)<<endl;
             pop(sp);
         pop(sp);
    pop(sp);
     pop(sp);
      pop(sp);
       pop(sp);
        pop(sp);
         pop(sp);
          pop(sp);
           pop(sp);
            pop(sp);
    

delete sp;
return 0;
}