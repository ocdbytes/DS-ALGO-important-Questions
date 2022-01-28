// build tree preorder and inorder
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

// function to search for element in inorder elements
int search(int inorder[], int start, int end ,int curr){
    for (int i = 0; i <=end; i++)
    {
        if(inorder[i] == curr){
            return i;
        }
    }
    return -1;
}

// Function to build tree from inorder and postorder
Node* buildTree(int preorder[], int inorder[], int start,int end){
    static int index = 0;
    if(start > end){
        return NULL;
    }

    int curr = preorder[index];
    index++;
    Node* node = new Node(curr);

    if(start == end){
        return node;
    }

    int pos = search(inorder,start,end,curr);
    node->left = buildTree(preorder,inorder,start,pos-1);
    node->right = buildTree(preorder,inorder,pos+1,end);

    return node;
}

void inorderPrint(Node* root){
    if(root == NULL){
        return;
    }
    inorderPrint(root->left);
    cout << root->data << " ";
    inorderPrint(root->right);
}

int main(){
    int preorder[] = {1,2,4,3,5};
    int inorder[] = {4,2,1,5,3};
    Node* root = buildTree(preorder,inorder,0,4);
    inorderPrint(root);
    cout << endl;
    return 0;
}