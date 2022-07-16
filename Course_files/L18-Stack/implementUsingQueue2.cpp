// pop operation costly
#include <iostream>
#include <queue>
using namespace std;
class Stack {
    int N;
    queue<int> q1, q2;

public:
    Stack() { N = 0; }
    void push(int n) {
        q1.push(n);
        N++;
    }
    void pop() {
        if (q1.empty()) {
            return;
        }
        while (q1.size() != 1) {
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        queue<int> temp = q2;
        q2 = q1;
        q1 = temp;
        N--;
    }
    int top() { return q1.back(); }
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
    cout << st.top() << endl; // gives garbage value
    st.pop();
    st.pop();
    return 0;
}
