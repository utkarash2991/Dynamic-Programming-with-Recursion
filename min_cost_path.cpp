/**
Problem Statement: Given a cost matrix cost[][] and a position (m, n) in cost[][], write a function that 
returns cost of minimum cost path to reach (m, n) from (0, 0). Each cell of the matrix represents a cost to traverse
 through that cell. Total cost of a path to reach (m, n) is sum of all the costs on that path 
 (including both source and destination). You can only traverse down, right and diagonally lower cells from a given cell, i.e.,
  from a given cell (i, j), cells (i+1, j), (i, j+1) and (i+1, j+1) can be traversed. You may assume that all costs are
   positive integers.
*/

#include <bits/stdc++.h>
using namespace std;
std::map<pair<int, int>,int> min_cost;
int min_cost_path_recursion(vector<vector<int>> &cost, int m , int n)
{
	if(m<0 || n<0)
		return INT_MAX;
	if(m==0 && n==0)
		return cost[m][n];
	pair<int, int> temp=make_pair(m,n);
	if(min_cost.find(temp)!=min_cost.end())
		return min_cost[temp];
	else
		return min_cost[temp]=cost[m][n]+min(min(min_cost_path_recursion(cost,m-1,n),min_cost_path_recursion(cost,m,n-1)),min_cost_path_recursion(cost,m-1,n-1));

}
int main()
{

std::vector<std::vector<int>> cost { {1, 2, 3},
                      			{4, 8, 2},
                      			{1, 5, 3} };
   printf(" Minimum Distance for the given point is %d ", min_cost_path_recursion(cost, 2, 2));

}
