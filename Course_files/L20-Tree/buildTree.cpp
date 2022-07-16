#include <iostream>
using namespace std;
struct node {
    int data;
    node *left, *right;
    node(int val) {
        data = val;
        left = right = NULL;
    }
};
int search(int inorder[], int start, int end, int curr) {
    for (int i = start; i <= end; i++) {
        if (inorder[i] == curr) {
            return i;
        }
    }
    return -1;
}
node *buildTreePre(int preorder[], int inorder[], int start, int end) {
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
    // As we are using preorder so left subtree will come before the right
    newNode->left = buildTreePre(preorder, inorder, start, pos - 1);
    newNode->right = buildTreePre(preorder, inorder, pos + 1, end);
}
node *buildTreePost(int postorder[], int inorder[], int start, int end) {
    static int idx = 4;
    if (start > end) {
        return NULL;
    }
    int curr = postorder[idx];
    idx++;

    node *newNode = new node(curr);
    if (start == end) {
        return newNode;
    }
    int pos = search(inorder, start, end, curr);
    // As we are using preorder so left subtree will come after the right
    newNode->right = buildTreePost(postorder, inorder, pos + 1, end);
    newNode->left = buildTreePost(postorder, inorder, start, pos - 1);
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
    /*
     * We cannot build an unique tree with preorder and postorder so inorder is mandatory.
     */
    int preorder[] = {1, 2, 4, 3, 5};
    int inorder[] = {4, 2, 1, 5, 3};
    int postorder[] = {4, 2, 5, 3, 1};
    int n = sizeof(preorder) / sizeof(preorder[0]);
    node *rootPre = buildTreePre(preorder, inorder, 0, n - 1);
    n = sizeof(postorder) / sizeof(postorder[0]);
    node *rootPost = buildTreePost(postorder, inorder, 0, n - 1);
    inorderPrint(rootPre);
    cout << endl;
    inorderPrint(rootPost);
    return 0;
}
