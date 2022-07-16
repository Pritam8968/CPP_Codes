#include<iostream>
#include<stack>
using namespace std;
bool isBalancedParenthesis(string exp){
    stack<char> st;
    for (int i = 0; i < exp.length(); i++)
    {
        char currBrace=exp[i];
        if(currBrace=='('||currBrace=='{'||currBrace=='['){st.push(currBrace);cout<<currBrace;}
        else if(currBrace==')'){
            if(!st.empty()&&st.top()=='('){cout<<currBrace;st.pop();}
            else{ return false;}
        }
        else if(currBrace=='}'){
            if(!st.empty()&&st.top()=='{'){cout<<currBrace;st.pop();}
            else{ return false;}
        }
        else if(currBrace==']'){
            if(!st.empty()&&st.top()=='['){cout<<currBrace;st.pop();}
            else{ return false;}
        }
    }
    return st.empty();
}
int main(int argc, char const *argv[])
{
    string parenthesisExp="([{(){[]}()}]))";
    cout<<endl<<isBalancedParenthesis(parenthesisExp)<<endl;
    return 0;
}
