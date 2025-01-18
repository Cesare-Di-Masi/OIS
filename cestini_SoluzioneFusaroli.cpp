
#include <bits/stdc++.h>

using namespace std;

void solve(int t) {
    int N, M, Q;
    cin >> N >> M >> Q;

    string S;
    cin >> S;

    vector<string>cestini(M);
    cestini[0]=S;

    string risposta;

    for (int i = 0; i < Q; i++) {
        char type;
        int a, b;
        cin >> type >> a >> b;

        if (type == 's') {
                
            char lettera = cestini[a].back();
            cestini[a].pop_back();
            cestini[b].push_back(lettera);
        }
        else
        {
            char lettera = cestini[a].at(b);
            risposta.push_back(lettera);
        }
    }


    cout << "Case #" << t << ": " << risposta << endl;
}

int main() {
    

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        solve(t);
    }

    return 0;
}
