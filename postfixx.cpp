#include <iostream>
#include <stack>
#include <string>

using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') {
        return 1;
    }
    if (op == '*' || op == '/') {
        return 2;
    }
    return 0;
}

bool isOperator(char token) {
    return (token == '+' || token == '-' || token == '*' || token == '/');
}

string infixToPostfix(const string& infix) {
    stack<char> operators;
    string postfix;

    for (int i = 0; i < infix.length(); i++) {
        char token = infix[i];
        // if ((token >= 'A' && token <= 'Z') || (token >= 'a' && token <= 'z') || (token >= '0' && token <= '9')) {
        //     postfix += token;
        //     // postfix += ' ';
        // } 
        if(isalnum(token)){
            postfix+=token;
        }
        else if (token == '(') {
            operators.push(token);
        } 
        else if (token == ')') {
            while (!operators.empty() && operators.top() != '(') {
                postfix += operators.top();
                //postfix += ' ';
                operators.pop();
            }
            if (!operators.empty() && operators.top() == '(') {
                operators.pop();
            }
        } 
        
        else if (isOperator(token)) {
            while (!operators.empty() && precedence(operators.top()) >= precedence(token)) {
                postfix += operators.top();
                //postfix += ' ';
                operators.pop();
            }
            operators.push(token);
        }
    }

    while (!operators.empty()) {
        postfix += operators.top();
        //postfix += ' ';
        operators.pop();
    }

    return postfix;
}

int main() {
    string infixExpression;
    cout << "Enter an infix expression: ";
    getline(cin, infixExpression);

    string postfixExpression = infixToPostfix(infixExpression);
    cout << "Postfix expression: " << postfixExpression << endl;

    return 0;
}
