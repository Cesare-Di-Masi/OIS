// NOTE: it is recommended to use this even if you don't understand the following code.

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
//  uncomment the following lines if you want to read/write from files
//  ifstream cin("input.txt");
//  ofstream cout("output.txt");

	ios::sync_with_stdio(false);

    int N;
    cin >> N;

	vector<int> S(N);
	for(int i = 0; i < N; i++) {
		cin >> S[i];
	}


    // insert your code here
	int res = 42;


    // print the result
	cout << res << endl;

	return 0;
}
