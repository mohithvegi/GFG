// https://practice.geeksforgeeks.org/problems/maximum-sum-of-hour-glass/0

#include<bits/stdc++.h>
using namespace std;

int max(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main()
 {
	int T;
	cin >> T;
	for(int t=0; t<T; t++){
	    int N, M;
	    cin >> N >> M;
	    int matrix[N][M];
	    for(int n=0; n<N; n++){
	        for(int m=0; m<M; m++){
	            cin >> matrix[n][m];
	        }
	    }
	    int max_ = 0;
	    int sum_;
	    for(int i=0; i<N-2; i++){
	        for(int j=0; j<M-2; j++){
	            int row1 = matrix[i][j] + matrix[i][j+1] + matrix[i][j+2];
		    	int row2 = matrix[i+1][j+1];
			    int row3 = matrix[i+2][j] + matrix[i+2][j+1] + matrix[i+2][j+2];
			    sum_ = row1 + row2 + row3;
			    max_ = max(max_, sum_);
	        }
	    }
	    if(N<3 || M<3){
	        cout << "-1" << endl;
	    }
	    else{
    	    cout << max_ << endl;
	    }
	}

	return 0;
}
