// https://practice.geeksforgeeks.org/problems/rank-of-matrix/0

#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int T;
	cin >> T;

	while(T--) {
		int matrix[3][3];

		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				cin >> matrix[i][j];
			}
		}

		int a1 = matrix[0][0];
		int a2 = matrix[0][1];
		int a3 = matrix[0][2];

		int b1 = matrix[1][0];
		int b2 = matrix[1][1];
		int b3 = matrix[1][2];

		int c1 = matrix[2][0];
		int c2 = matrix[2][1];
		int c3 = matrix[2][2];

		int det = a1*((b2*c3)-(c2*b3)) - a2*((b1*c3)-(c1*b3)) + a3*((b1*c2)-(c1*b2));
		int rank;

		if(det != 0){
			rank = 3;
		}
		else{
			int d1 = (a1*b2)-(a2*b1);
			int d2 = (a2*b3)-(a3*b2);
			int d3 = (b1*c2)-(b2*c1);
			int d4 = (b2*c3)-(b3*c2);
			if(d1==0 && d2==0 && d3==0 && d4==0){
				rank = 1;
			}
			else{
				rank = 2;
			}
		}

		cout << rank << endl;

	}

	return 0;
}