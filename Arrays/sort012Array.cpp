//
// Created by vegimohith on 27/07/20.
//

/*
      Given an array A of size N containing 0s, 1s, and 2s; you need to sort the array in ascending order.

      Input:
      The first line contains an integer 'T' denoting the total number of test cases. Then T testcases follow. Each testcases contains two lines of input. The first line denotes the size of the array N. The second lines contains the elements of the array A separated by spaces.

      Output:
      For each testcase, print the sorted array.

      Constraints:
      1 <= T <= 500
      1 <= N <= 106
      0 <= Ai <= 2

      Example:
      Input :
      2
      5
      0 2 1 2 0
      3
      0 1 0

      Output:
      0 0 1 2 2
      0 0 1
*/


#include<iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int number;
        int zeros_count=0;
        int ones_count=0;
        int twos_count=0;
        for(int index=0; index<N; index++){
            cin >> number;
            if(number==0){
                zeros_count += 1;
            }
            else if(number==1){
                ones_count += 1;
            }
            else if(number==2){
                twos_count += 1;
            }
        }
        for(int i1=0; i1<zeros_count; i1++){
            cout << "0" << " ";
        }
        for(int i2=0; i2<ones_count; i2++){
            cout << "1" << " ";
        }
        for(int i3=0; i3<twos_count; i3++){
            cout << "2" << " ";
        }
        cout << endl;
    }


    return 0;
}
