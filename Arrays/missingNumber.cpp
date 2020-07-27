//
// Created by vegimohith on 27/07/20.
//

/*
        Given an array C of size N-1 and given that there are numbers from 1 to N with one element missing, the missing number is to be found.

        Input:
        The first line of input contains an integer T denoting the number of test cases. For each test case first line contains N(size of array). The subsequent line contains N-1 array elements.

        Output:
        Print the missing number in array.

        Constraints:
        1 ≤ T ≤ 200
        1 ≤ N ≤ 107
        1 ≤ C[i] ≤ 107

        Example:
        Input:
        2
        5
        1 2 3 5
        10
        1 2 3 4 5 6 7 8 10

        Output:
        4
        9
 */

#include<iostream>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int total_sum = 0;
        int number;

        for(int index=0; index<N-1; index++){
            cin >> number;
            total_sum = total_sum + number;
        }

        int actual_sum = (N*(N+1))/2;
        int missing_number = actual_sum - total_sum;
        cout << missing_number << endl;
    }
}
