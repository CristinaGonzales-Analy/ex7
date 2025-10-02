#include <iostream>
using namespace std;

struct BinaryTreeNode {
    string data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;

    BinaryTreeNode(const string& value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

void inorder(BinaryTreeNode* root);
void preorder(BinaryTreeNode* root);


int main() {

    return 0;
}

void inorder(BinaryTreeNode* root) {
    if (root == nullptr){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(BinaryTreeNode* root){
    if (root == nullptr) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

