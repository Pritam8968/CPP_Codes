#include <iostream>
#include <stack>
using namespace std;
class que {
    stack<int> s;

public:
    void push(int n) { s.push(n); }
    int pop() {
        if (s.empty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int curr = s.top();
        s.pop();
        if (s.empty()) {
            return curr;
        }
        int item = pop();
        s.push(curr);
        return item;
    }
};
int main(int argc, char const *argv[]) {
    que q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    return 0;
}
