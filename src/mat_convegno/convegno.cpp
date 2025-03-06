#include <bits/stdc++.h>

using namespace std;


static FILE *fr, *fw;

// Declaring variables
static int N;
static int* C;
static int res;

// Declaring functions

int counter = 0;

int ricorsiva(int N,int pos,int nNodi,vector<vector<int>>& L)
{
	if(pos > N)
		return 0;

	int ciao = 0;

	if(L[pos].size()>0)
	{
		for(int i=0; i<L[pos].size();i++)
		{
			ciao = ricorsiva(N,L[pos][i],nNodi++,L);
			counter++;
		}
			
	}else
	{
		counter+=nNodi;
		ciao = 0;
	}

	return ciao;
}

int coppie(int N, int C[]) 
{
	
	vector<vector<int>>L(N);

	int start = 0;

	for(int i=0; i<N; i++)
	{
		if(C[i]!=0)
		L[C[i]].push_back(i);
		else
		start = i;
	}
	int res = ricorsiva(N,start,0,L);

	return counter;

}
