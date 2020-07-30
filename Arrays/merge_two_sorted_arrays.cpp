/*

      Given two sorted arrays arr1[] and arr2[] in non-decreasing order with size n and m. The task is to merge the two sorted arrays into one sorted array (in non-decreasing order).

      Note: Expected time complexity is O((n+m) log(n+m)). DO NOT use extra space.  We need to modify existing arrays as following.

      Input: arr1[] = {10};
             arr2[] = {2, 3};
      Output: arr1[] = {2}
              arr2[] = {3, 10}

      Input: arr1[] = {1, 5, 9, 10, 15, 20};
             arr2[] = {2, 3, 8, 13};
      Output: arr1[] = {1, 2, 3, 5, 8, 9}
              arr2[] = {10, 13, 15, 20}
      Input:
      First line contains an integer T, denoting the number of test cases. First line of each test case contains two space separated integers X and Y, denoting the size of the two sorted arrays. Second line of each test case contains X space separated integers, denoting the first sorted array P. Third line of each test case contains Y space separated integers, denoting the second array Q.

      Output:
      For each test case, print (X + Y) space separated integer representing the merged array.

      Constraints:
      1 <= T <= 100
      1 <= X, Y <= 5*104
      0 <= arr1i, arr2i <= 109

      Example:
      Input:
      2
      4 5
      1 3 5 7
      0 2 6 8 9
      2 3
      10 12
      5 18 20

      Output:
      0 1 2 3 5 6 7 8 9
      5 10 12 18 20

*/


#include<iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int T;
    cin >> T;
    while(T--){
        int N1, N2;
        cin >> N1 >> N2;
        int array1[N1];
        int array2[N2];
        for(int index1=0; index1<N1; index1++){
            cin >> array1[index1];
        }
        for(int index2=0; index2<N2; index2++){
            cin >> array2[index2];
        }
        int n1=0, n2=0;
        while(n1<N1 && n2<N2){
            if(array1[n1] < array2[n2]){
                cout << array1[n1] << " ";
                n1++;
            }
            else{
                cout << array2[n2] << " ";
                n2++;
            }
        }
        while(n1<N1){
            cout << array1[n1] << " ";
            n1++;
        }
        while(n2<N2){
            cout << array2[n2] << " ";
            n2++;
        }
        cout << endl;
    }

    return 0;
}
