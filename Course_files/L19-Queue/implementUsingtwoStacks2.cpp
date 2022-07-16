/*
Enqueue operation costly
*/
#include <iostream>
#include <stack>
using namespace std;
class qu {
    stack<int> s1, s2;

public:
    void push(int n) {
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(n);
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }
    int pop() {
        if (s1.empty() && s2.empty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int topVal = s1.top();
        s1.pop();
        return topVal;
    }
};
int main(int argc, char const *argv[]) {
    qu q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    return 0;
}
