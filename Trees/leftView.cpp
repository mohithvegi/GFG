/*
    Left View of Binary Tree.
*/


#include<bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;
};

struct Node* createNode(int data){
    Node* new_node = new Node;
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}

struct Node* insertNode(struct Node* root, int data){
    if(root == NULL){
        return createNode(data);
    }
    else{
        if(root->data > data){
            root->left = insertNode(root->left, data);
        }
        else{
            root-> right = insertNode(root->right, data);
        }
    }

    return root;
}

void printLevelOrderBT(Node *root) {
    queue<Node*>q1;
    queue<int>q2;
    q1.push(root);
    int l=0;
    while(!q1.empty()){
        if(l==0){
            l = q1.size();
        }
        Node *temp = q1.front();
        q2.push(temp->data);
        l--;
        q1.pop();
        if(temp->left){
            q1.push(temp->left);
        }
        if(temp->right){
            q1.push(temp->right);
        }
        if(l==0){
            int value = q2.front();
            cout << value << " ";
            while(!q2.empty()){
                // cout << q2.front() << " ";
                q2.pop();
            }
        }
    }
}

int main(int argc, char const *argv[]) {

    Node *root = new Node;
    root->data = 8;
    root->left = NULL;
    root->right = NULL;
    insertNode(root, 3);
    insertNode(root, 10);
    insertNode(root, 1);
    insertNode(root, 6);
    insertNode(root, 14);
    insertNode(root, 4);
    insertNode(root, 7);
    insertNode(root, 13);

    printLevelOrderBT(root);
    cout << endl;

    return 0;
}
