/*
Dequeue operation costly
*/
#include<iostream>
#include<stack>
using namespace std;
class que{
    stack<int> s1;
    stack<int> s2;
    public:
    void push(int n){
        s1.push(n);
    }
    int pop(){
        if(s1.empty() && s2.empty()){
            cout<<"Queue id empty"<<endl;
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topVal=s2.top();
        s2.pop();
        return topVal;
    }
    bool empty(){ return s1.empty() && s2.empty();}
};
int main(int argc, char const *argv[])
{
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
