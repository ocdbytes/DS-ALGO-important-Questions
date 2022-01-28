// build tree postorder and inorder
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


Node* buildTree(int postorder[],int inorder[],int start,int end){
    static int index = 4; // n-1
    if(start > end){
        return NULL;
    }

    int curr = postorder[index];
    index--;
    Node* node = new Node(curr);
    if(start == end){
        return node;
    }

    int pos = search(inorder,start,end,curr);
    node->right = buildTree(postorder,inorder,pos+1,end);
    node->left = buildTree(postorder,inorder,start,pos-1);

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

void postorderPrint(Node* root){
    if(root == NULL)
        return;
    inorderPrint(root->left);
    inorderPrint(root->right);
    cout << root->data << " ";
}

int main(){
    int postorder[] = {4,2,5,3,1};
    int inorder[] = {4,2,1,5,3};
    Node* root = buildTree(postorder,inorder,0,4);
    inorderPrint(root);
    cout << endl;
    postorderPrint(root);
    cout << endl;
    return 0;
}