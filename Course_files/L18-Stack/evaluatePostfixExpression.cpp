#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
int evaluatePrefix(string prefixExp){
    stack<int> st;
    for (int i =0; i < prefixExp.length(); i++)
    {
        if(prefixExp[i]>='0'&&prefixExp[i]<='9'){
            st.push(prefixExp[i]-'0');
        }else{
            int operand2=st.top();//difference with prefix evaluation
            st.pop();
            int operand1=st.top();//difference with prefix evaluation
            st.pop();
            switch (prefixExp[i])
            {
            case '+':
                st.push(operand1+operand2);
                cout<<operand1<<'+'<<operand2<<endl;
                break;
            case '-':
                st.push(operand1-operand2);
                cout<<operand1<<'-'<<operand2<<endl;
                break;
            case '*':
                st.push(operand1*operand2);
                cout<<operand1<<'*'<<operand2<<endl;
                break;
            case '/':
                st.push(operand1/operand2);
                cout<<operand1<<'/'<<operand2<<endl;
                break;
            case '^':
                st.push(pow(operand1,operand2));
                cout<<operand1<<'^'<<operand2<<endl;
                break;
            default:
                break;
            }
        }
    }
    return st.top();
}
int main(int argc, char const *argv[])
{
    cout<<evaluatePrefix("46+2/5*7+")<<endl;
    return 0;
}
