/*

      Given a matrix mat[] of size n x m, where every row and column is sorted in increasing order, and a number x is given. The task is to find whether element x is present in the matrix or not.

      Expected Time Complexity : O(m + n)

      Input:
      The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case consists of three lines. First line of each test case consist of two space separated integers N and M, denoting the number of element in a row and column respectively. Second line of each test case consists of N*M space separated integers denoting the elements in the matrix in row major order. Third line of each test case contains a single integer x, the element to be searched.

      Output:
      Corresponding to each test case, print in a new line, 1 if the element x is present in the matrix, otherwise simply print 0.

      Constraints:
      1 <= T <= 200
      1 <= N, M <= 30
      1 <= mat[][] <= 100
      1<= X <= 100
      Example:
      Input:
      2
      3 3
      3 30 38 44 52 54 57 60 69
      62
      1 6
      18 21 27 38 55 67
      55

      Output:
      0
      1

*/


#include<iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    /* code */

    int T;
    cin >> T;
    while(T--){
        int N, M;
        cin >> N >> M;
        int matrix[N][M];
        for(int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                cin >> matrix[i][j];
            }
        }
        int x;
        cin >> x;
        int index1=0, index2=M-1;
        int flag = 0;
        while(index1<N && index2>=0){
            if(matrix[index1][index2] == x){
                flag = 1;
                break;
            }
            else if(matrix[index1][index2] > x){
                index2--;
            }
            else{
                index1++;
            }
        }
        cout << flag << endl;
    }

    return 0;
}
