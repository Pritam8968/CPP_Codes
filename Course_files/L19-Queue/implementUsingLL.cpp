#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int val){
        data=val;
        next=NULL;
    }
};
class queue{
    node* frontIdx=NULL,*backIdx=NULL;
    public:
    void push(int n){
        node *newNode=new node(n);
        if(frontIdx==NULL){
            frontIdx=backIdx=newNode;
            return;
        }
        backIdx->next= newNode;
        backIdx=newNode;
    }
    void pop(){
        if(frontIdx==NULL){
            cout<<"Queue underflow"<<endl;
        }
        node* deleteNode=frontIdx;
        frontIdx=frontIdx->next;
        delete deleteNode;
    }
    int front(){
        if(frontIdx==NULL){return -1;}
        return frontIdx->data;
    }
    int back(){
        if(frontIdx==NULL){return -1;}
        return backIdx->data;
    }
    bool empty(){return frontIdx==NULL;}
};
int main(int argc, char const *argv[])
{
    queue qu;
    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.push(4);
    cout<<qu.front()<<" "<<qu.back()<<endl;
    qu.pop();
    qu.pop();
    qu.pop();
    qu.pop();
    cout<<qu.front()<<" "<<qu.back()<<endl;
    qu.pop();
    qu.push(5);
    cout<<qu.front()<<" "<<qu.back()<<endl;
    return 0;
}
