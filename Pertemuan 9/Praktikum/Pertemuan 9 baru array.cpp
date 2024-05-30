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
    int array[] = {1, 2, 3, 4, 5};
    TreeNode* root = new TreeNode(array[0]);
    root->left = new TreeNode(array[1]);
    root->right = new TreeNode(array[2]);
    root->left->left = new TreeNode(array[3]);
    root->left->right = new TreeNode(array[4]);

    // Menampilkan nilai simulasi pohon
    cout << "Nilai simpul pohon:" << endl;
    cout << "Akar: " << root->data << endl;
    cout << "Anak kiri dari akar: " << root->left->data << endl;
    cout << "Anak kanan dari akar: " << root->right->data << endl;
    cout << "Anak Kiri dari Anak Kiri dari Akar: " << root->left->left->data << endl;
    cout << "Anak Kanan dari Anak Kanan dari Akar: " << root->left->right->data << endl;

    // Membersihkan memori
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}

