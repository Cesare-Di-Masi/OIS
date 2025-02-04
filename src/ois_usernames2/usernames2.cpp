#include <bits/stdc++.h>

using namespace std;

int main()
{

    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int N;
    string name, usedName;
    set<string> s;
    
    cin>>name>>N;

    usedName=name;

    for(int i=0; i<N; i++)
    {
        string a;
        cin>>a;
        s.insert(a);
    }

    int counter=1;
    

    for(int i=0; i<N; i++)
    {
        if(s.count(usedName)==true)
        {
            usedName=name + to_string(counter);
            counter++;
        }
    }

    cout<<usedName;

}