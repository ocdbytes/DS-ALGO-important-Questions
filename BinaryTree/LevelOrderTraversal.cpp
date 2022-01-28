// we impliment it using queue
#include <iostream>
#include <queue>
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

void printLevelOrder(Node* root){
    if(root == NULL){
        return;
    }

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()){
        Node* node = q.front();
        q.pop();
        if(node != NULL){
            cout << node->data << " ";
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
        }else if(!q.empty()){
            q.push(NULL);
        }
    }
    
}

// void levelPrint(Node* root){
//     if(root == NULL){
//         return;
//     }

//     queue <Node*> q1;
//     q1.push(root);
//     q1.push(NULL);
//     while (!q1.empty()){
//         Node* node = q1.front();
//         q1.pop();
//         if(node != NULL){
//             cout << node->data << " ";
//             if(node->left){
//                 q1.push(node->left);
//             }
//             if(node->right){
//                 q1.push(node->right);
//             }
//         }else if(!q1.empty()){
//             q1.push(NULL);
//         }
//     }
//     cout << endl;
// }

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    printLevelOrder(root);
    cout << endl;
    // levelPrint(root);
    return 0;
}