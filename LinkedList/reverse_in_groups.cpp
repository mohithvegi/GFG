/*

      Given a linked list of size N. The task is to reverse every k nodes (where k is an input to the function) in the linked list.

      Input:
      First line of input contains number of testcases T. For each testcase, first line contains length of linked list and next line contains the linked list elements.

      Output:
      For each testcase, there will be a single line of output which contains the linked list with every k group elements reversed.

      User Task:
      The task is to complete the function reverse() which should reverse the linked list in group of size k.

      Expected Time Complexity : O(n)
      Expected Auxilliary Space : O(1)

      Example:
      Input:
      2
      8
      1 2 2 4 5 6 7 8
      4
      5
      1 2 3 4 5
      3

      Output:
      4 2 2 1 8 7 6 5
      3 2 1 5 4

*/

#include<bits/stdc++.h>

using namespace std;

struct node *reverse(struct node *head, int k);

struct node{
    int data;
    struct node *next;
    node(int x){
        data = x;
        next = NULL;
    }
};

void printList(struct node *node){
    while(node != NULL){
        printf("%d ", node->data);
    }
    printf("\n");
}

int main(int argc, char const *argv[]) {
    int t;
    cin >> t;
    while(t--){
        struct node* head = NULL;
        struct node* tail = NULL;
        int n;
        cin >> n;
        for(int i=0; i<n; i++){
            int value;
            cin >> value;
            if(i==0){
                head = new node(value);
                temp = head;
            }
            else{
                temp->next = new node(value);
                temp = temp->next;
            }
        }
        int k;
        cin >> k;

        head = reverse(head, k);
        printList(head);
    }

    return 0;
}

struct node *reverse(struct node *head, int k){
    node *prev = NULL;
    node *current = head;
    node *next = NULL;
    int count=0;
    while(count<k && current!=NULL){
        next = current->next;
        current->next = prev;
        previous = current;
        current = next;
        count++;
    }
    if(next != NULL){
        head->next = reverse(next, k);
    }
    return prev;
}
