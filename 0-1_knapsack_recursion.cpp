/**
Problem Statement: Given weights and values of n items, put these items in a knapsack of capacity W to get the maximum total
 value in the knapsack. In other words, given two integer arrays val[0..n-1] and wt[0..n-1] which represent values and weights
  associated with n items respectively. Also given an integer W which represents knapsack capacity, find out the maximum value 
  subset of val[] such that sum of the weights of this subset is smaller than or equal to W. You cannot break an item, either
   pick the complete item, or don’t pick it (0-1 property).
*/


#include <bits/stdc++.h>
using namespace std;

std::map<pair<int,int>, int> prGiven weights and values of n items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack. In other words, given two integer arrays val[0..n-1] and wt[0..n-1] which represent values and weights associated with n items respectively. Also given an integer W which represents knapsack capacity, find out the maximum value subset of val[] such that sum of the weights of this subset is smaller than or equal to W. You cannot break an item, either pick the complete item, or don’t pick it (0-1 property).ofit;
int knapsack_profit(vector<int> &weight, vector<int> &value, int num_of_items, int sack_capacity)
{
	if(num_of_items ==0 || sack_capacity==0)
		return 0;
	pair<int,int> temp=make_pair(num_of_items,sack_capacity);
	if(profit.find(temp)!=profit.end())
		return profit[temp];
	if(weight[num_of_items-1]>sack_capacity)
		return profit[temp]=knapsack_profit(weight,value,num_of_items-1,sack_capacity);
	else
		return profit[temp]=max(value[num_of_items-1]+knapsack_profit(weight,value,num_of_items-1,sack_capacity-weight[num_of_items-1]),knapsack_profit(weight,value,num_of_items-1,sack_capacity));
}
int main()
{
    vector<int> val = {60, 100, 120};
    vector<int> wt = {10, 20, 30};
    int  W = 50;
    int n = 3;
    printf("%d", knapsack_profit(wt, val, n, W));
    return 0;
}
