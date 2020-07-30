/*

      Given an array A of N positive numbers. The task is to find the position where equilibrium first occurs in the array. Equilibrium position in an array is a position such that the sum of elements before it is equal to the sum of elements after it.

      Input:
      The first line of input contains an integer T, denoting the number of test cases. Then T test cases follow. First line of each test case contains an integer N denoting the size of the array. Then in the next line are N space separated values of the array A.

      Output:
      For each test case in a new  line print the position at which the elements are at equilibrium if no equilibrium point exists print -1.

      Constraints:
      1 <= T <= 100
      1 <= N <= 106
      1 <= Ai <= 108

      Example:
      Input:
      2
      1
      1
      5
      1 3 5 2 2

      Output:
      1
      3

*/


#include<iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int array[N];
        for(int index=0; index<N; index++){
            cin >> array[index];
        }
        int curr_sum_left[N];
        int curr_sum_right[N];
        int sum1 = 0;
        int sum2 = 0;
        for(int i=0; i<N; i++){
            sum1 = sum1 + array[i];
            curr_sum_left[i] = sum1;
        }
        for(int j=N-1; j>=0; j--){
            sum2 = sum2 + array[j];
            curr_sum_right[j] = sum2;
        }
        int result=-1;
        if(N==1){
            result = 1;
        }
        for(int k=1; k<N-1; k++){
            if(curr_sum_left[k-1] == curr_sum_right[k+1]){
                result = k+1;
                break;
            }
        }
        cout << result << endl;
    }

    return 0;
}
