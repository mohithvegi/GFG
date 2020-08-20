// https://practice.geeksforgeeks.org/problems/kth-largest-element-in-a-stream/0

#include<bits/stdc++.h>

using namespace std;

int kthLargest(priority_queue<int> pq, int k) {
    for(int j=0; j<k-1; j++) {
        pq.pop();
    }
    return pq.top();
}

int main(int argc, char const *argv[]) {

    int T;
    cin >> T;
    while(T--) {
        int k,N;
        cin >> k >> N;
        int number;
        priority_queue <int, vector<int>, greater<int> > heap;
        for(int index = 0; index<N; index++) {
            cin >> number;
            if(index+1 < k) {
                cout << "-1" << " ";
                heap.push(number);
            }
            else if(index+1 == k){
                heap.push(number);
                cout << heap.top() << " ";
            }
            else{
                int top = heap.top();
                if(number>top){
                    heap.pop();
                    heap.push(number);
                }
                cout << heap.top() << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
