#include <iostream>

using namespace std;

int compila(int D, int X, int N, int S) {
    
    bool done = false;
    int counter = 0;
    int current = N;

    if(X <= D-(N*S))
    return 0;

    while(done == false)
    {
        if(X <= D-(current*S))
        done = true;
        else
        {
            current--;
            counter++;
        }
    }


    return counter;
}

// NON TOCCARE SOTTO QUESTA LINEA

#ifndef EVAL

int main() {
    //D = disco - X typsit - N num programmi - S spazio per software
    int D, X, N, S;
    cin >> D >> X >> N >> S;

    cout << compila(D, X, N, S) << endl;
}

#endif
