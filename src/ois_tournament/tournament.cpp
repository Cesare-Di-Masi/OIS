// NOTE: it is recommended to use this even if you don't understand the following code.

#include <bits/stdc++.h>

using namespace std;

int main(){
//  uncomment the following lines if you want to read/write from files
    ifstream cin("input.txt");
    ofstream cout("output.txt");

	long long N;
    cin >> N;

	vector<int> S(N);
	for(int i = 0; i < N; i++) {
		cin >> S[i];
	}


    // insert your code here
	long long res = -2e9;

	for(int i=0; i<N-1;i++)
	{
		for(int j=i; j<N;j++){
			long long a = abs(S[i]-S[j]) + abs(i-j);
			res= max(res,a);
		}
	}


    // print the result
	cout << res << endl;

	return 0;
}
