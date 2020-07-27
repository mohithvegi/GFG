//
// Created by vegimohith on 27/07/20.
//

/*
      Given a string S consisting only '0's and '1's,  print the last index of the '1' present in it.

      Input:
      First line of the input contains the number of test cases T, T lines follow each containing a stream of characters.

      Output:
      Corresponding to every test case, output the last index of 1. If 1 is not present, print "-1" (without quotes).

      Constraints:
      1 <= T <= 110
      1 <= |S| <= 106

      Example:
      Input:
      2
      00001
      0
      Output:
      4
      -1
*/


#include<iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int T;
    cin >> T;
    while(T--){
        string s;
        cin >> s;
        int last_index=-1;
        int length = s.length();
        for(int index=0; index<length; index++){
            if(s[length-1-index]=='1'){
                last_index = length-1-index;
                break;
            }
        }
        cout << last_index << endl;
    }

    return 0;
}
