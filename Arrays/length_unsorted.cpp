// https://practice.geeksforgeeks.org/problems/length-unsorted-subarray/0

#include<iostream>

using namespace std;

int min(int a, int b) {
	if(a<b){
		return a;
	}
	else{
		return b;
	}
}

int max(int a, int b) {
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}

int main(int argc, char const *argv[])
{
	int T;
	cin >> T;
	while(T--){
		int N;
		cin >> N;
		int numbers[N];
		for(int index=0; index<N; index++){
			cin >> numbers[index];
		}
		int start=-1, end=-1;
		for(int i=0; i<N-1; i++){
			if(numbers[i] > numbers[i+1]){
				start = i;
				break;
			}
		}
		for(int j=N-1; j>0; j--){
			if(numbers[j] < numbers[j-1]){
				end = j;
				break;
			}
		}
		int min_ = numbers[start];
		int max_ = numbers[start];
		if(start==-1 && end==-1){
			start = 0;
			end = 0;
		}
		else{
			for(int k=start; k<=end; k++){
				min_ = min(min_, numbers[k]);
				max_ = max(max_, numbers[k]);
			}
			for(int i=0; i<start; i++){
				if(numbers[i] > min_){
					start = i;
					break;
				}
			}
			for(int j=end+1; j<N; j++){
				if(numbers[j] < max_){
					end = j;
				}
			}
		}
		cout << start << " " << end << endl;
	}

	return 0;
}
