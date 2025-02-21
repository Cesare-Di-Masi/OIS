#include <iostream>
#include <vector>

using namespace std;

int traffico(int N, vector<int> S) {
    //pari verde, dispari rosso
    bool isGreenFirst = N%2==0;
    bool alternate = true;

    int wrongP=0, wrongD=0;
    int wrongP1 = 0, wrongD1=0;

    for(int i = 0; i<N; i++)
    {
        if(isGreenFirst==true)
        {
            if(alternate==true)
            {
                if(S[i]%2 != 0)
                {
                    wrongP+=1;
                }
                alternate=false;
            }else
            {
                if(S[i]%2 == 0)
                {
                    wrongD+=1;
                }
                alternate=true;
            }
        }else
        {
            if(alternate==true)
            {
                if(S[i]%2 == 0)
                {
                    wrongD+=1;
                }
                alternate=false;
            }else
            {
                if(S[i]%2 != 0)
                {
                    wrongP+=1;
                }
                alternate=true;
            }
        }
    }

    isGreenFirst = false;

    for(int i = 0; i<N; i++)
    {
        if(isGreenFirst==true)
        {
            if(alternate==true)
            {
                if(S[i]%2 != 0)
                {
                    wrongP1+=1;
                }
                alternate=false;
            }else
            {
                if(S[i]%2 == 0)
                {
                    wrongD1+=1;
                }
                alternate=true;
            }
        }else
        {
            if(alternate==true)
            {
                if(S[i]%2 == 0)
                {
                    wrongD1+=1;
                }
                alternate=false;
            }else
            {
                if(S[i]%2 != 0)
                {
                    wrongP1+=1;
                }
                alternate=true;
            }
        }
    }


    return min(wrongD+wrongP,wrongD1+wrongP1);
}

// NON TOCCARE SOTTO QUESTA LINEA

#ifndef EVAL

int main() {
    int N; cin >> N;

    vector<int> S(N);

    for (auto &s: S) {
        cin >> s;
    }

    cout << traffico(N, S) << endl;
}

#endif
