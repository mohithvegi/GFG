/*

      Given an array A (distinct elements) of size N. Rearrange the elements of array in zig-zag fashion. The converted array should be in form a < b > c < d > e < f. The relative order of elements is same in the output i.e you have to iterate on the original array only.

      Input:
      The first line of input contains an integer T denoting the number of test cases. T testcases follow. Each testcase contains two lines of input. The first line contains a single integer N denoting the size of array.
      The second line contains N space-separated integers denoting the elements of the array.

      Output:
      For each testcase, print the array in Zig-Zag fashion.

      Constraints:
      1 <= T <= 100
      1 <= N <= 100
      0 <= Ai <= 10000

      Example:
      Input:
      2
      7
      4 3 7 8 6 2 1
      4
      1 4 3 2
      Output:
      3 7 4 8 2 6 1
      1 4 2 3

*/


#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int array[N];
        for(int index=0; index<N; index++){
            cin >> array[index];
        }
        bool flag = false;
        for(int i=0; i<N-1; i++){
            if(!flag){
                if(array[i]>array[i+1]){
                    swap(array[i], array[i+1]);
                }
            }
            else if(flag){
                if(array[i]<array[i+1]){
                  swap(array[i], array[i+1]);
                }
            }
            flag = !(flag);
        }
        for(int j=0; j<N; j++){
            cout << array[j] << " ";
        }
        cout << endl;
    }

    return 0;
}
