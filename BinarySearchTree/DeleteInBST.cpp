#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL; 
        right = NULL;
    }
};

Node* buildBST(Node* root,int val){
    if(root == NULL){
        return new Node(val);
    }
    if(val < root->data){
        buildBST(root->left, val);
    }else{
        buildBST(root->right,val);
    }
}

void printinorderBST(Node* root){
    if(root == NULL){
        return;
    }

    printinorderBST(root->left);
    cout << root->data << endl;
    printinorderBST(root->right);
}

// Deleting the nodes in a BST
// case 1 : deleting a leaf node
// case 2 : deleting a node with one child
// case 3 : deleting a node with two children

int main(){
    return 0;
}