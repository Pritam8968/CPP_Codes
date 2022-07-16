#include<iostream>
using namespace std;
class Queue{
    int *arr;
    int frontIdx=-1,backIdx=-1,size;
    public:
    Queue(int n)
    {
        size = n;
        arr = new int[size];
    }
    void push(int val){
        if(backIdx>size-1){
            cout<<"Queue Overflow"<<endl;
            return;
        }
        if(frontIdx==-1){frontIdx++;}
        backIdx++;
        arr[backIdx]=val;
    }
    void pop(){
        if(frontIdx==-1){cout<<"Queue Underflow"<<endl;}
        else if(frontIdx==size-1 || frontIdx>backIdx){
            frontIdx=backIdx=-1;
        }
        else{frontIdx++;}
    }
    int front(){return arr[frontIdx];}
    int back(){return arr[backIdx];}
    bool empty(){return frontIdx==-1;}
    int length(){
        if(frontIdx==-1){return 0;}
        return backIdx-frontIdx+1;
    }
};
int main(int argc, char const *argv[])
{
    Queue qu = Queue(10);
    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.push(4);
    cout<<qu.front()<<" "<<qu.back()<<endl;
    cout<<qu.length()<<endl;
    qu.pop();
    qu.push(5);
    cout<<qu.front()<<" "<<qu.back()<<endl;
    cout<<qu.length()<<endl;
    return 0;
}
