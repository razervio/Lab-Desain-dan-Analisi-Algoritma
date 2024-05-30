#include <iostream>
using namespace std;

// Struktur node untuk pohon
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Fungsi untuk membuat node baru dalam pohon
Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Fungsi untuk menambahkan node ke pohon
Node* insert(Node* root, int data) {
    if (root == NULL) {
        root = createNode(data);
    } else if (data <= root->data) {
        root->left = insert(root->left, data);
    } else {
        root->right = insert(root->right, data);
    }
    return root;
}

// Fungsi untuk mencetak urutan preorder
void preorder(Node* root) {
    if (root != NULL) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

// Fungsi untuk mencetak urutan inorder
void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

// Fungsi untuk mencetak urutan postorder
void postorder(Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

int main() {
    // Membuat pohon
    Node* root = NULL;
    int arr[] = {12, 16, 20, 24, 32};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        root = insert(root, arr[i]);
    }

    // Menampilkan urutan preorder
    cout << "Preorder: ";
    preorder(root);
    cout << endl;

    // Menampilkan urutan inorder
    cout << "Inorder: ";
    inorder(root);
    cout << endl;

    // Menampilkan urutan postorder
    cout << "Postorder: ";
    postorder(root);
    cout << endl;

    return 0;
}

