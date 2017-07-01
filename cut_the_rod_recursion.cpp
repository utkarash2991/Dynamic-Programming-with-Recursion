/**
Problem Statement:Given a rod of length n inches and an array of prices that contains prices of all pieces of size smaller than
 n. Determine the maximum value obtainable by cutting up the rod and selling the pieces. 
*/

#include <bits/stdc++.h>
using namespace std;
map<int,int> profit;
 int profit_rod(vector<int> &price, int n)
 {
 	if(n<=0)
 		return 0;
 	if(profit.find(n)!=profit.end())
 	{
 		return profit[n];
 	}
 	int max_val=INT_MIN;
 	for(int i=0;i<=n-1;i++)
 	{
 		max_val=max(max_val,price[i]+profit_rod(price,n-i-1));
 	}
 	return profit[n]=max_val;

 }
 int main()
{
    vector<int> arr = {1, 5, 8, 9, 10, 17, 17, 20};
    int size = 8;
    printf("Maximum Obtainable Value is %d", profit_rod(arr, size));
   
    return 0;
}
