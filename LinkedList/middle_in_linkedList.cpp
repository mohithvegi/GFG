/*

      Given a singly linked list of N nodes. The task is to find the middle of the linked list. For example, if given linked list is 1->2->3->4->5 then the output should be 3.
      If there are even nodes, then there would be two middle nodes, we need to print the second middle element. For example, if given linked list is 1->2->3->4->5->6 then the output should be 4.

      Input:
      The first line of input contains the number of test cases T. For each test case, the first line of input contains the length of the linked list and the next line contains data of nodes of the linked list.

      Output:
      For each test case, there will be a single line of output containing data of the middle element of the linked list.

      User Task:
      The task is to complete the function getMiddle() which takes a head reference as the only argument and should return the data at the middle node of the linked list.

      Expected Time Complexity: O(N).
      Expected Auxiliary Space: O(1).

      Constraints:
      1 <= T <= 500
      1 <= N <= 5000

      Example:
      Input:
      2
      5
      1 2 3 4 5
      6
      2 4 6 7 5 1

      Output:
      3
      7

*/


#include<bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node *node){
    while(node != NULL){
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int getMiddle(Node *head);

int main(int argc, char const *argv[]) {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int data;
        cin >> data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for(int i=0; i<n-1; i++){
            cin >> data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        cout << getMiddle(head) << endl;
    }

    return 0;
}


int getMiddle(Node *head){
    int count = 0;
    Node *temp = head;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    int middle = count/2;
    int it=0;
    temp = head;
    while(it<middle){
        it++;
        temp = temp->next;
    }
    if(count==1){
        return head->data;
    }
    else if(count==2){
        return head->next->data;
    }
    return temp->data;
}
