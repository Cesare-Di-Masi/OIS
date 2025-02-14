#include <bits/stdc++.h>

using namespace std;


double scosse(long long N) {
    
    long long B=N; 
    double res = (double)(B * (B-1)) / 4;
    return res;
}


int main() {

    ifstream cin("input.txt");
    ofstream cout("output.txt");

    long long N;

    cin >> N;
    cout << scosse(N);   
}
