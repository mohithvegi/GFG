// https://practice.geeksforgeeks.org/problems/kth-smallest-element/0

#include<bits/stdc++.h>

using namespace std;

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
        int k;
        cin >> k;
        priority_queue<int> heap;       // max heap.
        for(int i=0; i<N; i++){
            if(i+1 <= k){
                heap.push(numbers[i]);
            }
            else{
                int top = heap.top();
                if(numbers[i] < top) {
                    heap.pop();
                    heap.push(numbers[i]);
                }
            }
        }
        cout << heap.top() << endl;
    }

    return 0;
}
