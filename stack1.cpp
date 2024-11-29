#include<iostream>
using namespace std;
class stack{
    public:
    int size;
    int top;
    int * arr;
};

int isEmpty(stack* ptr){
if(ptr->top==-1){
    return 1;
}
return 0;
}

int isFull(stack * ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    return 0;
}
void pop(stack*ptr,int data,int position){
    ptr->arr[position]=data;
    ptr->top++;
}

int main(){
    stack * s=new stack;
    s->size=5;
    s->top=-1;
    s->arr= new int[s->size];

    pop(s,1,0);
    pop(s,2,1);
    pop(s,3,2);
    pop(s,4,3);
    pop(s,5,4);
    if(isEmpty(s)==1){
        cout<<"\n The stack is empty"<<endl;
    }

    if(isFull(s)==1){
        cout<<"\n The stack is full"<<endl;
    }

    // delete[] s->arr; // Don't forget to deallocate the memory for the array
    delete s; 

    return 0;

}