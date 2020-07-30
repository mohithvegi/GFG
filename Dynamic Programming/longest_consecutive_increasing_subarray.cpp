/*
      Given a sequence A of size N, find the length of the longest increasing subsequence from a given sequence .
      The longest increasing subsequence means to find a subsequence of a given sequence in which the subsequence's elements are in sorted order, lowest to highest, and in which the subsequence is as long as possible. This subsequence is not necessarily contiguous, or unique.

      Note: Duplicate numbers are not counted as increasing subsequence.

      Input:
      The first line contains an integer T, depicting total number of test cases. Then following T lines contains an integer N depicting the size of array and next line followed by the value of array.

      Output:
      For each testcase, in a new line, print the Max length of the subsequence in a separate line.

      Constraints:
      1 ≤ T ≤ 100
      1 ≤ N ≤ 1000
      0 ≤ A[i] ≤ 300

      Example:
      Input : a[] = {3, 10, 3, 11, 4, 5, 6, 7, 8, 12}
      Output : 6
      Explanation: 3, 4, 5, 6, 7, 8 is the longest increasing subsequence whose adjacent element differs by one.

      Input : a[] = {6, 7, 8, 3, 4, 5, 9, 10}
      Output : 5
      Explanation: 6, 7, 8, 9, 10 is the longest increasing subsequence
*/

#include<iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int numbers[N];
        int dp[N+1];
        for(int index=0; index<N; index++){
            cin >> numbers[index];
            dp[index] = 1;
        }
        dp[N] = 1;
        for(int i=1; i<N; i++){
            if(numbers[i]>numbers[i-1]){
                dp[i] = 1+dp[i-1];
            }
        }
        int max=0;
        for(int j=0; j<N; j++){
            if(dp[j]>max){
                max = dp[j];
            }
        }
        cout << max << endl;
    }

    return 0;
}
