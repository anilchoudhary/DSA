#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T=1;
	cin >> T;
	while(T!=0){
	    int N, M, K;
	    cin >> N >> M >> K;
	    int C[N][K]={};
	    for(int i=0; i<N; i++)
	        for(int j=0; j<K; j++)
	            cin >> C[i][j];
	    for(int i=0; i<N; i++){
	        sort(C[i], C[i]+K);
	        int max_count=1;
	        int curr_count=1;
	        int res = C[i][0];
	        for (int j = 1; j < K; j++) {
                if (C[i][j] == C[i][j - 1])
                    curr_count++;
                else {
                    if (curr_count > max_count) {
                        max_count = curr_count;
                        res = C[i][j - 1];
                    }
                    curr_count = 1;
                }
            }
            if (curr_count > max_count){
                max_count = curr_count;
                res = C[i][K - 1];
            }
            cout << res << " ";
	    }
	    T--;
	}

	return 0;
}
