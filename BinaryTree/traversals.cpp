#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

// function for preorder traversal (root,left subtree, right subtree)
void preorderTransversal(struct Node* root){
    if(root == NULL){
        return;
    }
    cout << root->data << " ";
    preorderTransversal(root->left);
    preorderTransversal(root->right);
}

// function for inorder traversal (left subtree, root, right subtree)
void inorderTraversal(struct Node* root){
    if(root == NULL){
        return;
    }
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

// function for postorder traversal (left subtree, right subtree, root)
void postorderTraversal(struct Node* root){
    if(root == NULL){
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout << "Preorder Traversal : ";
    preorderTransversal(root);
    cout << endl;
    cout << "Inorder Traversal : ";
    inorderTraversal(root);
    cout << endl;
    cout << "Postorder Traversal : ";
    postorderTraversal(root);
    return 0;  
}