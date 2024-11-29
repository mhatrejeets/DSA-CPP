#include <iostream>
#include<string>
using namespace std;

class Stack {
public:
    char* arr;
    int top;
    int capacity;

    Stack(int size) {
        capacity = size;
        arr = new char[size];
        top = -1;
    }

    void push(char data) {
        if (top == capacity - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = data;
    }

    char pop() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
            return '\0';
        }
        return arr[top--];
    }

    char peek() {
        if (top == -1) {
            return '\0';
        }
        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }

    ~Stack() {
        delete[] arr;
    }
};

int precedence(char c) {
    if (c == '+' || c == '-'){
        return 1;
    }
    if (c == '*' || c == '/'){
        return 2;
    }
    return 0;
}

string infixToPostfix(string infix) {
    Stack st(infix.length());
    st.push('N');
    string postfix = "";

    for (int i = 0; i < infix.length(); i++) {
        if (isalnum(infix[i])){
            postfix += infix[i];
        }
        else if (infix[i] == '('){
            st.push('(');
        }
        else if (infix[i] == ')') {
            while (st.peek() != 'N' && st.peek() != '(') {
                char c = st.pop();
                postfix += c;
            }
            if (st.peek() == '('){
                st.pop();
            }
        }
        else {
            while (st.peek() != 'N' && precedence(infix[i]) <= precedence(st.peek())) {
                char c = st.pop();
                postfix += c;
            }
            st.push(infix[i]);
        }
    }

    while (st.peek() != 'N') {
        char c = st.pop();
        postfix += c;
    }

    return postfix;
}

int main() {
    string infix;
    cout << "Enter an infix expression: ";
    cin >> infix;
    string postfix = infixToPostfix(infix);
    cout << "Postfix expression: " << postfix << endl;
    return 0;
}
