// https://practice.geeksforgeeks.org/problems/-rearrange-array-alternately/0/

#include<iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int array[N];
        for(int index=0; index<N; index++){
            cin >> array[index];
        }
        for(int i=0; i<N/2; i++){
            cout << array[N-1-i] << " ";
            cout << array[i] << " ";
        }
        if(N%2 != 0){
            cout << array[N/2];
        }
        cout << endl;
    }
}
