/*
    Check if given tree is BST or not.
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

bool isSmaller(Node* root, int value){
    if(!root){
        return true;
    }
    else{
        if((root->data <= value) && isSmaller(root->left, value) && isSmaller(root->right, value)){
            return true;
        }
        else{
            return false;
        }
    }
}

bool isGreater(Node* root, int value){
    if(!root){
        return true;
    }
    else{
        if((root->data >= value) && isGreater(root->left, value) && isGreater(root->right, value)){
            return true;
        }
        else{
            return false;
        }
    }
}

bool isBST(Node* root){
    if(!root){
        return true;
    }
    else{
        if(isSmaller(root->left, root->data) && isGreater(root->right, root->data) && isBST(root->left) && isBST(root->right)){
            return true;
        }
        else{
            return false;
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

    if(isBST(root)){
        cout << "Given tree is Binary Search Tree!" << endl;
    }
    else{
        cout << "Given tree is not a Binary Search Tree." << endl;
    }

    return 0;
}
