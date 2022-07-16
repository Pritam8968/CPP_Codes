#include <iostream>
using namespace std;
struct node {
    int data;
    struct node *left;
    struct node *right;
    node(int val) {
        data = val;
        left = right = NULL;
    }
};
void preorder(struct node *root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct node *root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void postorder(struct node *root) {
    if (root == NULL) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
int noOfNodes(struct node *root) {
    if (root == NULL) {
        return 0;
    }
    return noOfNodes(root->left) + noOfNodes(root->right) + 1;
}
int sumOfNodes(struct node *root) {
    if (root == NULL) {
        return 0;
    }
    return sumOfNodes(root->left) + sumOfNodes(root->right) + root->data;
}
int main(int argc, char const *argv[]) {
    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    /*
        1
       / \
      2   3
    */
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    /*
        1
       / \
      2   3
     / \ / \
    4  5 6  7
    */

    cout << "No. of nodes: " << noOfNodes(root) << endl;
    cout << "Sum of the nodes: " << sumOfNodes(root) << endl;
    cout << "Preorder: ";
    preorder(root);
    cout << endl;
    cout << "Inorder: ";
    inorder(root);
    cout << endl;
    cout << "Postorder: ";
    postorder(root);
    cout << endl;
    return 0;
}
