/**
Problem statement:Given two strings str1 and str2 and below operations that can performed on str1. Find minimum number of edits (operations) required to convert ‘str1’ into ‘str2’.

    Insert
    Remove
    Replace

*/

#include<bits/stdc++.h>
using namespace std; 
std::map<pair<int, int>,int> edit_distance;

int min_edit_distance(string X, string Y, int m, int n)
{
	if(m ==0)
		return n;
	if (n==0)
		return m;
	pair<int, int> temp=make_pair(m,n);
	if(edit_distance.find(temp)!=edit_distance.end())
		return edit_distance[temp];
	if(X[m-1]==Y[n-1])
		return edit_distance[temp]=min_edit_distance(X,Y,m-1,n-1);
	else 
		return edit_distance[temp]=1+min(min(min_edit_distance(X,Y,m,n-1),min_edit_distance(X,Y,m-1,n)),min_edit_distance(X,Y,m-1,n-1));
}
int main()
{
    // your code goes here
    string str1 = "sunday";
    string str2 = "saturday";
 
    cout << "Edit Distance of two strings is"min_edit_distance( str1 , str2 , str1.length(), str2.length());
 
    return 0;
}
