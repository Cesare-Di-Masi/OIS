// NOTE: it is recommended to use this even if you don't understand the following code.

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // uncomment the two following lines if you want to read/write from files
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int N;
    cin >> N;

    string L;
    cin >> L;

    string R;
    cin >> R;

    int ans = 0;


    for(int i=0;i<N;i++)
    {
        if(L[i] == 'G' || R[i] == 'G')
        {
            ans++;
        }else
        {
            break;
        }


    }

    cout << ans << endl;
            return 0;

}
