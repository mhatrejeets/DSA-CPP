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
void display(stack* ptr){
    cout<<"\n"<<ptr->top<<endl;
      int arr_ind;
    for(int i=1;i<=ptr->size;i++){
    arr_ind=ptr->top-i+2;
   cout<<"\n"<<arr_ind;
    }
}
int peek(stack*ptr,int peek_i){
    if(ptr->top-peek_i+1 <0){
        cout<<"\nIt is not possible"<<endl;
        return -99;
    }
    int arr_index=ptr->top - peek_i + 1;
    return ptr->arr[arr_index];
}
int stackTop(stack* ptr){
    return ptr->arr[ptr->top];
}
int stackBottom(stack* ptr){
    return ptr->arr[0];
}
int main(){
    stack *s= new stack;
    s->size=8;
    s->top= -1;
    s->arr= new int[s->size];
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
    //push(s,9);
    cout<<"After is full- "<<isFull(s)<<endl;
    cout<<"After is empty- "<<isEmpty(s)<<endl;
  cout<<"The value of peek index 3 is "<<peek(s,3);
   cout<<"The value of peek index 9 is "<<peek(s,9);
   //display(s);
   cout<<"The element at top is "<<stackTop(s);
   cout<<"\n The element at bottom  is "<<stackBottom(s);
   display(s);
    delete s->arr;
    delete s;
    return 0;

}