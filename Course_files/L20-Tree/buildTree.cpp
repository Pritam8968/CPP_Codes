#include <iostream>
using namespace std;
typedef struct Node {
    int data;
    Node *left, *right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
}node;
int search(int inorder[], int start, int end, int curr) {
    for (int i = start; i <= end; i++) {
        if (inorder[i] == curr) {
            return i;
        }
    }
    return -1;
}
node *buildTree(int preorder[], int inorder[], int start, int end) {
    static int idx = 0;
    if (start > end) {
        return NULL;
    }
    int curr = preorder[idx];
    idx++;

    node *newNode = new node(curr);
    if (start == end) {
        return newNode;
    }
    int pos = search(inorder, start, end, curr);
    newNode->left = buildTree(preorder, inorder, start, pos - 1);
    newNode->right = buildTree(preorder, inorder, pos + 1, end);
}
void inorderPrint(node *root) {
    if (root == NULL) {
        return;
    }
    inorderPrint(root->left);
    cout << root->data << " ";
    inorderPrint(root->right);
}
int main(int argc, char const *argv[]) {
    int preorder[] = {1, 2, 4, 3, 5};
    int inorder[] = {4, 2, 1, 5, 3};
    int n = sizeof(preorder) / sizeof(preorder[0]);
    node *root = buildTree(preorder, inorder, 0, n - 1);
    inorderPrint(root);
    return 0;
}
