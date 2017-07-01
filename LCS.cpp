/*Problem Statement: LCS Problem Statement: Given two sequences, find the length of longest subsequence present in both of them.
*/
#include <bits/stdc++.h>
using namespace std;
int compute_lcs_rec(string X,string Y, int m, int n);
std::map<pair<int,int>,int> lcs; //used as an array for memoization

int main()
{
	
	  string X = "AGGTAB";
    string Y = "GXTXAYB";

    int m = X.size();
    int n = Y.size();

    printf("Length of LCS is %d\n", compute_lcs_rec( X, Y, m, n) );
     return 0;


}
int compute_lcs_rec(string X,string Y, int m, int n)
{
	if(m==0|| n==0)
	{
		return 0;
	}
	pair<int, int> temp=make_pair(m,n);
	if(lcs.count(temp)!=0)
		return lcs[temp];
	if(X[m-1]==Y[n-1])
		return lcs[temp]=1+compute_lcs_rec(X,Y,m-1,n-1);
	else
		return lcs[temp]=max(compute_lcs_rec(X,Y,m,n-1),compute_lcs_rec(X,Y,m-1,n));
}





