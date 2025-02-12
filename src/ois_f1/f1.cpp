#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int N;
    cin >> N;

    int bestH = 100001;
    int bestV = 100001;

    int totalH = 0;
    int totalV = 0;

    for (int i = 0; i < N; i++)
    {
        int a = 0;
        cin >> a;
        totalH += a;
        if (a < bestH)
        {
            bestH = a;
        }
    }

    for (int i = 0; i < N; i++)
    {
        int a = 0;
        cin >> a;
        totalV += a;
        if (a < bestV)
        {
            bestV = a;
        }
    }

    if (totalH < totalV)
    {
        cout << "Hamilton\n";
    }
    else
    {
        cout << "Verstappen\n";
    }

    if (bestH < bestV)
    {
        cout << "Hamilton\n";
    }
    else
    {
        cout << "Verstappen\n";
    }

    return 0;
}