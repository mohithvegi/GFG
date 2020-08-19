// https://practice.geeksforgeeks.org/problems/missing-number-in-array/0

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        int sum = 0;
        int number;
        for(int index=1; index<N; index++){
            cin >> number;
            sum += number;
        }
        int actual_sum = (N*(N+1))/2;
        int missing_number = actual_sum - sum;
        cout << missing_number << endl;
    }

    return 0;
}
