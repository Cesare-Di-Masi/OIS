#include <bits/stdc++.h>
using namespace std;


int main()
{
    ifstream fin ("input.txt");
    ofstream fout ("output.txt");

    int n;
    string s;

    fin>>n>>s;

    stack<char> parentesi;

    for (char c: s)
    {
        //se la parentesi é aperta la aggiungo alla pila
        if(c=='<' || c=='(' || c=='[' || c=='{')
        {
            parentesi.push(c);
        }
        else
        {
            //se é chiusa deve chiudere l'iultima parentesi aperta altrimeni le parentesi non sono bilanciate
            char topEl = ' ';
            if(!parentesi.empty())
            {
                topEl = parentesi.top();
            }
            switch(c)
            {
                case '>':
                    if(topEl!='<')
                    {
                        fout<<"malformata";
                        return 0;
                    }
                    break;
                case ')':
                    if(topEl!='(')
                    {
                        fout<<"malformata";
                        return 0;
                    }
                    break;
                case ']':
                    if(topEl!='[')
                    {
                        fout<<"malformata";
                        return 0;
                    }
                    break;
                case '}':
                    if(topEl!='{')
                    {
                        fout<<"malformata";
                        return 0;
                    }
                    break;
            }
            //se arrivo qui la parentesi é corretta tolgo la testa dalla pila
            parentesi.pop();
        }

    }

    //se la pila é vuota é ben formata
    if(parentesi.empty())
    {
        fout<<"corretta";
    }
    else
    {
            fout<<"malformata";
    }

    return 0;
}