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
        root->left = buildBST(root->left, val);
    }else{
        root->right = buildBST(root->right,val);
    }

    return root;
}

void printinorderBST(Node* root){
    if(root == NULL){
        return;
    }

    printinorderBST(root->left);
    cout << root->data << " ";
    printinorderBST(root->right);
}

// Deleting the nodes in a BST
// case 1 : deleting a leaf node
// case 2 : deleting a node with one child
// case 3 : deleting a node with two children

// function to get inorder successor
Node* iorderSuccessor(Node* root){
    Node* curr = root;
    while(curr && curr->left != NULL){
        curr = curr->left;
    }
    return curr;
}

Node* deleteInBST(Node* root,int key){
    // first two conditions is for finding our root node in our tree
    if(key < root->data){
        root->left = deleteInBST(root->left,key);
    }
    else if(key > root->data){
        root->right = deleteInBST(root->right,key);
    }else{
        //case 1 & 2
        if(root->left == NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        }else if(root->right == NULL){
            Node* temp = root->left;
            free(root);
            return temp;
        }
        //case 3
        Node* temp = iorderSuccessor(root->right);
        root->data = temp->data;
        root->right = deleteInBST(root->right, temp->data);
    }
    return root;

}

int main(){
    int n;
    cin >> n;
    Node* root = NULL;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        root = buildBST(root,val);
    }
    //printing the tree before delete
    printinorderBST(root);
    cout << endl;
    int key;
    cin >> key;
    deleteInBST(root,key);
    //printing the tree after delete
    printinorderBST(root);
    cout << endl;
    
    return 0;
}