/*

        You are given weights and values of N items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack. Note that we have only one quantity of each item.
        In other words, given two integer arrays val[0..N-1] and wt[0..N-1] which represent values and weights associated with N items respectively. Also given an integer W which represents knapsack capacity, find out the maximum value subset of val[] such that sum of the weights of this subset is smaller than or equal to W. You cannot break an item, either pick the complete item, or don’t pick it (0-1 property).

        Input:
        The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of four lines.
        The first line consists of N the number of items.
        The second line consists of W, the maximum capacity of the knapsack.
        In the next line are N space separated positive integers denoting the values of the N items,
        and in the fourth line are N space separated positive integers denoting the weights of the corresponding items.

        Output:
        For each testcase, in a new line, print the maximum possible value you can get with the given conditions that you can obtain for each test case in a new line.

        Constraints:
        1 ≤ T ≤ 100
        1 ≤ N ≤ 1000
        1 ≤ W ≤ 1000
        1 ≤ wt[i] ≤ 1000
        1 ≤ v[i] ≤ 1000

        Example:
        Input:
        2
        3
        4
        1 2 3
        4 5 1
        3
        3
        1 2 3
        4 5 6
        Output:
        3
        0

*/


#include<iostream>

using namespace std;

int main(){
      int T;
      cin >> T;
      while(T--){
          int N,W;
          cin >> N;
          cin >> W;
          int array[N];
          int weights[N];
          for(int index1=0; index1<N; index1++){
              cin >> array[index1];
          }
          for(int index2=0; index2<N; index2++){
              cin >> weights[index2];
          }
          int dp[N+1][W+1];
          for(int n=0; n<=N; n++){
              for(int w=0; w<=W; w++){
                  if(n==0 || w==0){
                      dp[n][w] = 0;
                  }
                  else if(weights[n-1] <= w){
                      dp[n][w] = max(array[n-1]+dp[n-1][w-weights[n-1]], dp[n-1][w]);
                  }
                  else{
                      dp[n][w] = dp[n-1][w];
                  }
              }
          }
          cout << dp[N][W] << endl;
      }


      return 0;
}
