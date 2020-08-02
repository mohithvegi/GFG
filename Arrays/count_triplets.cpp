/*

        Given an array of distinct integers. The task is to count all the triplets such that sum of two elements equals the third element.

        Input:
        The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains an Integer N denoting size of array and the second line contains N space separated elements.

        Output:
        For each test case, print the count of all triplets, in new line. If no such triplets can form, print "-1".

        Constraints:
        1 <= T <= 100
        3 <= N <= 105
        1 <= A[i] <= 106

        Example:
        Input:
        2
        4
        1 5 3 2
        3
        3 2 7
        Output:
        2
        -1

*/


#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
      int T;
      cin >> T;
      while(T--){
          int N;
          cin >> N;
          // int array[N];
          vector<int>array(N);
          for(int index=0; index<N; index++){
              cin >> array[index];
          }
          sort(array.begin(), array.end());
          int count=0;
          for(int i=N-1; i>=0; i--){
              int s1 = array[i];
              int start = 0;
              int end = i-1;
              while(start < end){
                  int s2 = array[start]+array[end];
                  if(s1 == s2){
                      count++;
                      start++;
                      end--;
                  }
                  else if(s2 < s1){
                      start++;
                  }
                  else{
                      end--;
                  }
              }
          }
          if(count==0){
              cout << "-1" << endl;
          }
          else{
              cout << count << endl;
          }
      }

      return 0;
}
