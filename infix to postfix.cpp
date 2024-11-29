#include <iostream>
#include <stack>
#include <string>

using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}

string infixToPostfix(const string& infix) {
    stack<char> operatorStack;
    string postfix;

    for (char c : infix) {
        if (isalnum(c)) {
            postfix += c;
        } else if (c == '(') {
            operatorStack.push(c);
        } else if (c == ')') {
            while (!operatorStack.empty() && operatorStack.top() != '(') {
                postfix += operatorStack.top();
                operatorStack.pop();
            }
            if (!operatorStack.empty() && operatorStack.top() == '(') {
                operatorStack.pop();
            }
        } else {
            while (!operatorStack.empty() && precedence(c) <= precedence(operatorStack.top())) {
                postfix += operatorStack.top();
                operatorStack.pop();
            }
            operatorStack.push(c);
        }
    }

    while (!operatorStack.empty()) {
        postfix += operatorStack.top();
        operatorStack.pop();
    }

    return postfix;
}

int main() {
    string infixExpression;
    cout << "Enter an infix expression: ";
    cin >> infixExpression;

    string postfixExpression = infixToPostfix(infixExpression);
    cout << "Postfix expression: " << postfixExpression << endl;

    return 0;
}
