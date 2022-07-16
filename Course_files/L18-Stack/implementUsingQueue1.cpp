// Push operation costly
#include <iostream>
#include <queue>
using namespace std;
class Stack {
    int N;
    queue<int> q1, q2;

public:
    Stack() { N = 0; }
    void push(int n) {
        q2.push(n);
        N++;
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp;
        temp = q2;
        q2 = q1;
        q1 = temp;
    }
    void pop() {
        q1.pop();
        N--;
    }
    int top() { return q1.front(); }
    int size() { return N; }
    bool empty() { return q1.empty(); }
};
int main(int argc, char const *argv[]) {
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    st.pop();
    st.pop();
    cout << st.top() << endl; // gives garbage value
    st.pop();
    return 0;
}
