#include <iostream>
#include <queue>
using namespace std;
struct node {
    int data;
    node *left, *right;
    node(int val) {
        data = val;
        left = right = NULL;
    }
};
// Basically we are traversing level-order  and printing the last node of each level
// complexity O(n)
void rightView(node *root) {
    if (root == NULL) {
        return;
    }
    queue<node *> q;
    q.push(root);
    while (!q.empty()) {
        int n = q.size();
        for (int i = 0; i < n; i++) {
            node *curr = q.front();
            q.pop();
            if (i == n - 1) {
                cout << curr->data << " ";
            }
            if (curr->left) {
                q.push(curr->left);
            }
            if (curr->right) {
                q.push(curr->right);
            }
        }
    }
}
// Basically we are traversing level-order  and printing the last node of each level
void leftView(node *root) {
    if (root == NULL) {
        return;
    }
    queue<node *> q;
    q.push(root);
    while (!q.empty()) {
        int n = q.size();
        for (int i = 0; i < n; i++) {
            node *curr = q.front();
            q.pop();
            if (i == 0) {
                cout << curr->data << " ";
            }
            if (curr->left) {
                q.push(curr->left);
            }
            if (curr->right) {
                q.push(curr->right);
            }
        }
    }
}
int main(int argc, char const *argv[]) {
    /*
        1
       / \
      2   3
     / \ / \
    4  5 6  7
    */
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    rightView(root);
    cout << "\n";
    leftView(root);
    return 0;
}