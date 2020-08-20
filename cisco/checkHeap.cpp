// https://practice.geeksforgeeks.org/problems/does-array-represent-heap/0

#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {

    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int array[N];
        for(int index=0; index<N; index++) {
            cin >> array[index];
        }
        bool flag = true;
        for(int i=0; i<N; i++) {
            if(array[(i-1)/2] < array[i]){
                flag = false;
                break;
            }
        }
        cout << flag << endl;
    }

    return 0;
}
