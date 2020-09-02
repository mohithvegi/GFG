// https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0

#include<iostream>
using namespace std;

int kadane(int A[], int N) {
    int curr_sum = A[0];
    int max_sum = A[0];
    for(int index=1; index<N; index++){
        curr_sum = max(A[index], curr_sum+A[index]);
        if(curr_sum > max_sum){
            max_sum = curr_sum;
        }
    }
    return max_sum;
}

int main() {
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int array[N];
        for(int index=0; index<N; index++){
            cin >> array[index];
        }
        cout << kadane(array, N) << endl;
    }
}
