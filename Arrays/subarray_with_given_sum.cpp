/*

      Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number S.

      Input:
      The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. The first line of each test case is N and S, where N is the size of array and S is the sum. The second line of each test case contains N space separated integers denoting the array elements.

      Output:
      For each testcase, in a new line, print the starting and ending positions(1 indexing) of first such occuring subarray from the left if sum equals to subarray, else print -1.

      Constraints:
      1 <= T <= 100
      1 <= N <= 107
      1 <= Ai <= 1010

      Example:
      Input:
      2
      5 12
      1 2 3 7 5
      10 15
      1 2 3 4 5 6 7 8 9 10
      Output:
      2 4
      1 5

*/


#include<iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int T;
    cin >> T;
    while(T--){
        int N, S;
        cin >> N >> S;
        int array[N];
        for(int index=0; index<N; index++){
            cin >> array[index];
        }
        bool flag = false;
        int current_sum = 0;
        // int start_index, end_index;
        int start=0, end=0;
        while(end < N){
            current_sum = current_sum + array[end];
            if(current_sum == S){
                flag = true;
                break;
            }
            else if(current_sum > S){
                start++;
                end = start;
                current_sum = 0;
            }
            else{
                end++;
            }
        }
        if(flag){
            cout << start+1 << " " << end+1 << endl;;
        }
        else{
            cout << "-1" << endl;
        }
    }

    return 0;
}
