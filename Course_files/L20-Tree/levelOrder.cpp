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
void levelOrder(node *root) {
    if (root == NULL) {
        return;
    }
    queue<node *> q;
    q.push(root);
    q.push(NULL); // for recognition of levels
    while (!q.empty()) {
        node *curr = q.front();
        q.pop();
        if (curr != NULL) {
            cout << curr->data << " ";
            if (curr->left) {
                q.push(curr->left);
            }
            if (curr->right) {
                q.push(curr->right);
            }
        } else if (!q.empty()) {
            q.push(NULL);
        }
    }
}
int sum_at_K_level(node *root, int k) {
    if (root == NULL) {
        return -1;
    }
    queue<node *> q;
    int level = 0;
    int sum = 0;
    q.push(root);
    q.push(NULL);
    while (!q.empty()) {
        node *curr = q.front();
        q.pop();
        if (curr != NULL) {
            if (level == k) {
                sum += curr->data;
            }
            if (curr->left) {
                q.push(curr->left);
            }
            if (curr->right) {
                q.push(curr->right);
            }
        } else if (!q.empty()) { // one level completed here
            q.push(NULL);
            level++;
        }
    }
    return sum;
}
int main(int argc, char const *argv[]) {
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    levelOrder(root);
    cout
        << endl
        << sum_at_K_level(root, 2)
        << endl;
    return 0;
}
