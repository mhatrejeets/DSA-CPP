#include<iostream>
using namespace std;
class stack{
    public:
    int size;
    int top;
    int * arr;
};
int isEmpty(stack * ptr){
    if(ptr->top == -1){
        return 1;
    }
    return 0;
}

int isFull(stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    return 0;
}

void push(stack * ptr,int val){
    if(isFull(ptr)==1){
        cout<<"Stack-Overflow \n Hence no new element can be added"<<endl;
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
void pop(stack* ptr){
    if(isEmpty(ptr)==1){
        cout<<"Stack-Underflow \n Hence no element can be removed"<<endl;
    }
    else{
        int value=ptr->arr[ptr->top];
        ptr->top --;
        cout<<"The value "<<value<<" at "<<ptr->top+1<<" position is popped."<<endl;
    }
}
int main(){
    stack *s= new stack;
    s->size=8;
    s->top= -1;
    s->arr=new int[s->size];
    cout<<"Before is full- "<<isFull(s)<<endl;
    cout<<"Before is empty- "<<isEmpty(s)<<endl;
    push(s,1);
    push(s,2);
    push(s,3);
    push(s,4);
    push(s,5);
    push(s,6);
    push(s,7);
    push(s,8);
    push(s,9);
    cout<<"After is full- "<<isFull(s)<<endl;
    cout<<"After is empty- "<<isEmpty(s)<<endl;
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    cout<<"later After is full- "<<isFull(s)<<endl;
    cout<<"later After is empty- "<<isEmpty(s)<<endl;
    delete s->arr;
    delete s;
    return 0;

}