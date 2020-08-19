// https://practice.geeksforgeeks.org/problems/array-to-bst/0

#include<bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;
};

Node *newNode(int data) {
    Node *temp = new Node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void printPreOrder(Node *root) {
    if(root==NULL) {
        return;
    }
    cout << root->data << " ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}

Node *arrayToBST(int array[], int start, int end) {
    if(start > end) {
        return NULL;
    }
    int middle = (start+end)/2;
    Node *root = newNode(array[middle]);
    root->left = arrayToBST(array, start, middle-1);
    root->right = arrayToBST(array, middle+1, end);

    return root;
}

int main(int argc, char const *argv[]) {

    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int numbers[N];
        for(int index=0; index<N; index++) {
            cin >> numbers[index];
        }
        Node *root = arrayToBST(numbers, 0, N-1);
        printPreOrder(root);
        cout << endl;
    }

    return 0;
}
