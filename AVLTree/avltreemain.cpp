// easy searching compared to binary search tree
// It is also known as Balanced height tree
// Condition : mod(heightOf left subtree - heightOf right subtree) <= 1

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

int height(Node* root){
    if(root == NULL){
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh,rh) + 1;
}

bool isBalanced(Node* root){
    if(root == NULL){
        return true;
    }

    if(isBalanced(root->left) == false){
        return false;
    }
    if(isBalanced(root->right)== false){
        return false;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    if(abs(lh - rh) <= 1){
        return true;
    }else{
        return true;
    }
}

//for O(n) approach
bool isBalanced(Node*root,int* height){
     
}

int main(){
    return 0;
}