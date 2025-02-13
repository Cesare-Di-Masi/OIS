#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,a;
    cin>>n>>m>>a;
    if(n==a){
        int res = 0;

    if(n>a||m>a || (n==a && m>1))
    {
        res = 0;
        cout << res << endl;
        return 0;
    }else if(n==a)
    {
        res = 1;
        cout<<res<<endl;
        return 0;
    }

    B=A;
    while(B>M)
    {
        b=b/n;
        res++;
        if(b>n)
        {
            res++;
        }
    }
    b=a;
    while(b>n)
    {
        b=b/m;
        res++;
        if(b>m)
        {
            res++;
        }
    }


    cout << res << endl;
    }
    else{
        vector<long long>Divs;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            Divs.push_back(i);
            //cout<<i<<" ";
        }
    }
    map<int,bool>visited;
    int ris=0;
    for(int i=0;i<Divs.size();i++){
        for(int j=0;j<Divs.size();j++){
            if(Divs[i]*Divs[j]==a){
                if(!visited.count(Divs[i])||!visited.count(Divs[j])){//se non è visitato
                    if((Divs[i]>=n)&&(Divs[j]>=n)&&(Divs[i]>=m)&&(Divs[j]>=m)){
                        ris+=2;
                        visited[Divs[i]]=true;
                        visited[Divs[j]]=true;
                        //cout<< " if "<<Divs[i]<<" "<<Divs[j]<<" fine if ";
                    }
                    else{
                        if((Divs[i]>=n&&Divs[j]>=m)||(Divs[i]>=m&&Divs[j]>=n)){
                        ris++;
                        visited[Divs[i]]=true;
                        visited[Divs[j]]=true;
                        //cout<< " else "<<Divs[i]<<" "<<Divs[j]<<" fine else ";
                        }
                    }
                }
                
                
            }
        }
    }
    cout<<ris;
    }
    
}