/*

        You are given a number N. You have to find the number of operations required to reach N from 0. You have 2 operations available:

        Double the number
        Add one to the number
        Input:
        The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer N.

        Output:
        For each test case, in a new line, print the minimum number of operations required to reach N from 0.

        Constraints:
        1<=T<=100
        1<=N<=104

        Example:
        Input:
        2
        8
        7
        Output:
        4
        5

*/


#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int operations=0;
        while(N>0){
            if(N%2==0){
                N=N/2;
            }
            else{
                N=N-1;
            }
            operations++;
        }
        cout << operations << endl;
    }

    return 0;
}
