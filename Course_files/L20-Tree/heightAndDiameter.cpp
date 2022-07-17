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
// height refers to the depth of the deepest leaf node
// complexity O(n)
int height(node *root) {
    if (root == NULL) {
        return 0;
    }
    int lHeight = height(root->left);
    int rHeight = height(root->right);
    return max(lHeight, rHeight) + 1;
}
// diameter refers to the number of nodes in the longest path between any two leaf nodes
// complexity O(n^2)
int diameter(node *root) {
    if (root == NULL) {
        return 0;
    }
    int lDiameter = diameter(root->left);
    int rDiameter = diameter(root->right);
    int lHeight = height(root->left);
    int rHeight = height(root->right);
    return max(lHeight + 1 + rHeight, max(lDiameter, rDiameter));
}
// Complexity O(n)
int diameterBetter(node *root, int *height) {
    if (root == NULL) {
        *height = 0;
        return 0;
    }
    int lHeight = 0, rHeight = 0;
    int lDiameter = diameterBetter(root->left, &lHeight);
    int rDiameter = diameterBetter(root->right, &rHeight);
    int currDiameter = lHeight + 1 + rHeight;
    *height = max(lHeight, rHeight) + 1;
    return max(currDiameter, max(lDiameter, rDiameter));
}
int main(int argc, char const *argv[]) {
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    cout << "Height: " << height(root) << endl;
    cout << "Diameter: " << diameter(root) << endl;
    int height = 0;
    cout << "Diameter: " << diameterBetter(root, &height) << endl;
    return 0;
}
