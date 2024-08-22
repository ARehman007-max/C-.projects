#include <iostream>
using namespace std;

struct NIGHTFURY {
    int value;
    NIGHTFURY *left, *right;
    NIGHTFURY(int x) : value(x), left(NULL), right(NULL) {}
};

NIGHTFURY* createTree() {
    NIGHTFURY* root = new NIGHTFURY(2);
    root->left = new NIGHTFURY(7);
    root->right = new NIGHTFURY(5);
    root->left->left = new NIGHTFURY(2);
    root->left->right = new NIGHTFURY(6);
    root->left->right->left = new NIGHTFURY(5);
    root->left->right->right = new NIGHTFURY(11);
    root->right->right = new NIGHTFURY(9);
    root->right->right->left = new NIGHTFURY(4);

    return root;
}

void preOrderTraversal(NIGHTFURY* node) {
    if (node == NULL)
        return;
    cout << node->value << " ";
    preOrderTraversal(node->left);
    preOrderTraversal(node->right);
}

void postOrderTraversal(NIGHTFURY* node) {
    if (node == NULL)
        return;
    postOrderTraversal(node->left);
    postOrderTraversal(node->right);
    cout << node->value << " ";
}

int findMaxDepth(NIGHTFURY* node) {
    if (node == NULL)
        return 0;
    int leftDepth = findMaxDepth(node->left);
    int rightDepth = findMaxDepth(node->right);
    return max(leftDepth, rightDepth) + 1;
}

void switchFunction(NIGHTFURY* root, int choice) {
    switch(choice) {
        case 1:
            cout << "Pre-order traversal: ";
            preOrderTraversal(root);
            cout << endl;
            break;
        case 2:
            cout << "Post-order traversal: ";
            postOrderTraversal(root);
            cout << endl;
            break;
        case 3:
            cout << "Maximum depth of the tree: " << findMaxDepth(root) << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }
}

int main() {
    NIGHTFURY* root = createTree();
    cout<<"\t\t\t\t\t\t|  Welcome to the DSA-Sessional #02   |\n\n\n";
    cout << "1. Pre-order traversal" << endl;
    cout << "2. Post-order traversal" << endl;
    cout << "3. Maximum depth of the tree" << endl;

    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    switchFunction(root, choice);

    return 0;
}
