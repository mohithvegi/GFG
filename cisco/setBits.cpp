// https://practice.geeksforgeeks.org/problems/set-bits/0

#include<iostream>

using namespace std;

int countBits(int N) {
    int count = 0;
    while(N>0){
        int r = N%2;
        if(r==1){
            count += 1;
        }
        N = N/2;
    }
    return count;
}

int main(int argc, char const *argv[]) {

    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        cout << countBits(N) << endl;
    }

    return 0;
}
