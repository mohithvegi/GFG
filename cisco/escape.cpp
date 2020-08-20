// https://practice.geeksforgeeks.org/problems/thief-try-to-excape/0

#include<iostream>

using namespace std;

int main(int argc, char const *argv[]) {

    int T;
    cin >> T;
    while(T--) {
        int X,Y,N;
        cin >> X >> Y >> N;
        int numbers[N];
        for(int index=0; index<N; index++) {
            cin >> numbers[index];
        }
        int steps = 0;
        for(int i=0; i<N; i++) {
            int height = numbers[i];
            int count = 0;
            while(1) {
                count++;
                if(height <= (count*X)-((count-1)*Y)){
                    break;
                }
            }
            steps += count;
        }
        cout << steps << endl;
    }

    return 0;
}
