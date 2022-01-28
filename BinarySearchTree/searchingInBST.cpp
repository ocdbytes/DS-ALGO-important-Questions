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

Node* buildBST(Node* root, int val){
    if(root == NULL){
        return new Node(val);
    }
    if(val < root->data){
        root->left = buildBST(root->left,val);
    }else{
        root->right = buildBST(root->right,val);
    }

    return root;
}

void printBST(Node* root){
    if(root == NULL){
        return ;
    }
    printBST(root->left);
    cout << root->data << " ";
    printBST(root->right);
}

// Function for finding the key
Node* findKey(Node*root,int key){
    if(root == NULL){
        return NULL;
    }

    if(root->data == key){
        return root;
    }
    // root data  > key
    if(root->data > key){
        return findKey(root->left, key);
    }
    // root < key
    return findKey(root->right,key);
}

int main(){
    int n;
    cout << "Enter the number of nodes in BST : ";
    cin >> n;
    Node* root = NULL;
    cout << "Enter the node values : " << endl;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        root = buildBST(root,val);
    }
    // printBST(root);
    cout << endl;
    int key;
    cout << "Enter the key you want to find : ";
    cin >> key;
    if(findKey(root,key) == NULL){
        cout << "Node doesn't exists" << endl;
    }else{
        cout << "Node Exists!!" << endl;
    }
    return 0;
}