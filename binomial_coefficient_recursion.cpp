/**
Problem Statement: Write a function that takes two parameters n and k and returns the value of Binomial Coefficient C(n, k)
*/

#include <bits/stdc++.h>
using namespace std;
std::map<pair<int,int>,int> binomial_value;
int binomial_coefficient(int n,int k)
{
	if(n ==0 || k==0)
		return 1;
	if(k>n)
		return 0;
	if(k==n)
		return 1;
	pair<int,int> temp=make_pair(n,k);
	if(binomial_value.find(temp)!=binomial_value.end())
	{
		return binomial_value[temp];
	}
	else 
		return binomial_value[temp]=binomial_coefficient(n-1,k)+binomial_coefficient(n-1,k-1);
}
int main()
{
    int n = 5, k = 2;
    printf("Value of C(%d, %d) is %d ", n, k, binomial_coefficient(n, k));
    return 0;
}
