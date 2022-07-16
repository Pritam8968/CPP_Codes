#include <iostream>
#include <stack>
using namespace std;
void insertAtBottom(stack<int> &st, int bottomElement)
{
    if (st.empty())
    {
        st.push(bottomElement);
        return;
    }
    int temp = st.top();
    st.pop();
    insertAtBottom(st, bottomElement);
    st.push(temp);
}
void reverseStack(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    int currTop = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st, currTop);
}
int main(int argc, char const *argv[])
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    reverseStack(st);
    while (!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    
    return 0;
}
