#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,long long>V;
    int ncopy=n;
    int len=0;
    int k=0;
    for(int i=0;i<10;i++){
        V[i]=0;
    }
    int l=n;
    int val=0;
    int iCopy=1;
    for(int i=1;i<=n;i++){
        iCopy=i;
        while(true){
            l=iCopy%10;
            V[l]+=1;//l è il numero
            iCopy=iCopy/10;
            if(iCopy<=0){
                break;
            }
        }
    }
    for(int i=0;i<10;i++){
        cout<<V[i]<<" ";
    }
    
}