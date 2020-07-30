/*

      Given an array of positive integers. Your task is to find the leaders in the array.
      Note: An element of array is leader if it is greater than or equal to all the elements to its right side. Also, the rightmost element is always a leader.

      Input:
      The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows.
      The first line of each test case contains a single integer N denoting the size of array.
      The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.

      Output:
      Print all the leaders.

      Constraints:
      1 <= T <= 100
      1 <= N <= 107
      0 <= Ai <= 107

      Example:
      Input:
      3
      6
      16 17 4 3 5 2
      5
      1 2 3 4 0
      5
      7 4 5 7 3
      Output:
      17 5 2
      4 0
      7 7 3

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
        int right_max[N];
        for(int index=0; index<N; index++){
            cin >> array[index];
        }
        right_max[N-1] = array[N-1];
        int curr_max = array[N-1];
        for(int i=N-2; i>=0; i--){
            if(array[i]>curr_max){
                curr_max = array[i];
            }
            right_max[i] = curr_max;
        }
        for(int j=0; j<N-1; j++){
            if(array[j]>=right_max[j+1]){
                cout << array[j] << " ";
            }
        }
        cout << array[N-1] << endl;
    }

    return 0;
}
