// NOTE: it is recommended to use this even if you don't understand the following code.

#include <bits/stdc++.h>

using namespace std;

int main() {
    // uncomment the two following lines if you want to read/write from files
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int N, K;
    cin >> N >> K;
    long long a;

    queue<int> C;
    for (int i = 0; i < N; ++i)
    {
        cin >> a;
        C.push(a);
    }

    long long M = 0;
    long long hand1 = C.front();
    C.pop();
    long long hand2 = C.front();
    C.pop();

    for(int i=0; i<K; i++)
    {
        if(hand1 < hand2)
        {
            M+=hand1;
            C.push(hand1);
            hand1 = C.front();
            C.pop();
        }else
        {
            M+=hand2;
            C.push(hand2);
            hand2 = C.front();
            C.pop();
        }


    }


    cout << M << endl;

    return 0;
}
