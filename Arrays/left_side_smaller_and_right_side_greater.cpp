//
// Created by vegimohith on 27/07/20.
//

/*
        Given an unsorted array of size N. Find the first element in array such that all of its left elements are smaller and all right elements to it are greater than it.

        Note: Left and right side elements can be equal to required element. And extreme elements cannot be required element.

        Input:
        The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains an Integer N denoting size of array and the second line contains N space separated array elements.

        Output:
        For each test case, in a new line print the required element. If no such element present in array then print -1.

        Constraints:
        1 <= T <= 100
        3 <= N <= 106
        1 <= A[i] <= 106

        Example:
        Input:
        3
        4
        4 2 5 7
        3
        11 9 12
        6
        4 3 2 7 8 9

        Output:
        5
        -1
        7
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
        int left_max[N];
        int right_min[N];
        for(int index=0; index<N; index++){
            cin >> array[index];
        }

        left_max[0] = array[0];
        int max = array[0];
        for(int i=1; i<N; i++){
            if(array[i]>max){
                max = array[i];
            }
            left_max[i] = max;
        }

        right_min[N-1] = array[N-1];
        int min = array[N-1];
        for(int j=N-2; j>=0; j--){
            if(array[j]<min){
                min = array[j];
            }
            right_min[j] = min;
        }

        int result=-1;

        for(int k=1; k<N-1; k++){
            if((array[k]>=left_max[k-1]) && (array[k]<=right_min[k+1])){
                result = array[k];
                break;
            }
        }

        cout << result << endl;
    }

    return 0;
}
