/*
    C++ program to print the bottom view of the Binary Tree.
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

void printBottomView(Node *root) {
    if(!root){
        return;
    }
    map<Node*,int>m1;
    map<int,int>m2;
    queue<Node*>q;
    q.push(root);
    int hd=0;
    m1[root] = hd;
    while(!q.empty()) {
        Node *temp = q.front();
        q.pop();
        hd = m1[temp];
        m2[hd] = temp->data;
        if(temp->left){
            q.push(temp->left);
            m1[temp->left] = hd-1;
        }
        if(temp->right){
            q.push(temp->right);
            m1[temp->right] = hd+1;
        }
    }
    map<int,int>::iterator it;
    for(it=m2.begin(); it!=m2.end(); it++) {
        cout << it->second << " ";
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

    printBottomView(root);
    cout << endl;

    return 0;
}
