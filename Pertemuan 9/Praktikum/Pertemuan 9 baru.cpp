#include <iostream>
using namespace std;

// Definisi
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    // Konstruk
    TreeNode(int value) : data(value), left(NULL), right(NULL) {}
};

int main() {
    // Membuat simpul pohon array
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    // Menampilkan nilai simulasi pohon
    cout << "Values of tree nodes:" << endl;
    cout << "Root: " << root->data << endl;
    cout << "Left child of root: " << root->left->data << endl;
    cout << "Right child of root: " << root->right->data << endl;
    cout << "Left child of left child of root: " << root->left->left->data << endl;
    cout << "Right child of left child of root: " << root->left->right->data << endl;

    // Membersihkan memori
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}

