#include<iostream>
#include<stack>
using namespace std;
int precedence(char op){
    if(op =='^'){
        return 3;
    }else if(op=='*'||op=='/'){
        return 2;
    }else if(op=='+'||op=='-'){
        return 1;
    }else{
        return -1;
    }
}
string infixToPostfix(string infixExp){
    string postfixExp="";
    stack<char> st;
    for (int i = 0; i < infixExp.length(); i++)
    {
        char currentChar=infixExp[i];
        if(currentChar=='(')
        {
            st.push(currentChar);
        }else if(currentChar==')'){
            while (!st.empty()&&st.top()!='(')
            {
                postfixExp+=st.top();
                st.pop();
            }
            if(!st.empty())
            { st.pop();}
        }else if((currentChar>='a'&&currentChar<='z')||(currentChar>='A'&&currentChar<='Z')||(currentChar>='0'&&currentChar<='9')){
            postfixExp+=currentChar;
        }
        else{
            while(!st.empty()&&precedence(st.top())>precedence(currentChar)){
                postfixExp+=st.top();
                st.pop();
            }
            st.push(currentChar);
        }
    }
    while(!st.empty()){
        postfixExp+=st.top();st.pop();
    }
    return postfixExp;
}
int main(int argc, char const *argv[])
{
    string infix="e^((a-b/c)*(a/k-l))";
    cout<<infixToPostfix(infix)<<endl;
    cout<<infixToPostfix("4*2+3")<<endl;
    cout<<infixToPostfix("5-6/3")<<endl;
    return 0;
}
