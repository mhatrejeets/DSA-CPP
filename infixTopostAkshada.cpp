#include <iostream>
#include <stack>
using namespace std;

bool isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int precedence(char charac)
{

    if (charac == '^')
    {
        return 3;
    }

    else if (charac == '*' || charac == '/')
    {
        return 2;
    }
    else if (charac == '+' || charac == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

string infix_to_postfix(string infix)
{
    stack<char> st;
    string result;

    for (int i = 0; i < infix.length(); i++)
    {
        if ((infix[i] >= 'a' && infix[i] <= 'z') || (infix[i] >= 'A' && infix[i] <= 'Z'))
        {
            result += infix[i];
        }
        else if (infix[i] == '(')
        {
            st.push(infix[i]);
        }
        else if (infix[i] == ')')
        {
            while ((!st.empty()) && (st.top() != '('))
            {
                char temp = st.top();
                result += temp;
                st.pop();
            }
            // if(!st.empty()){
            //     st.pop();
            // }
        }
        else if (isOperator(infix[i]))
        {

            if (st.empty())
            {
                st.push(infix[i]);
            }

            else
            {
                if ((precedence(st.top()) == precedence(infix[i])) && (infix[i] == '^'))
                {
                    st.push(infix[i]);
                }

                else if (!st.empty() && precedence(st.top()) < precedence(infix[i]))
                {
                    st.push(infix[i]);
                }
                else
                {
                    while (!st.empty() && precedence(st.top()) >= precedence(infix[i]))
                    {
                        char temp = st.top();
                        result += temp;
                        st.pop();
                    }
                    st.push(infix[i]);
                }
            }
        }
    }
    while (!st.empty())
        {
            result += st.top();
            st.pop();
        }
    return result;
}

int main()
{
    string inflix_inp,postfix;
    cout<<"Enter the inflix function: ";
    cin>>inflix_inp;
    cout << "Postfix : " << infix_to_postfix(inflix_inp)<<endl;
    return 0;
}