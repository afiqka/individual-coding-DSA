//according to the article, the author used A* algorithm which is the modified of Dynamic programming to solve the tsp 
//basically A*algorithm will ignored irrelevant problem in order to find optimal solution.
// this is just showing the search algorithm that been added in dynamic algorithm that ignores irrelevant subproblem
#include <bits/stdc++.h>
using namespace std;

const int N = 4;
int citySize, m, startPoint, target;
int f[N][4], distance[N][N];

struct city  // to construct a priority queue which willl given higher priority to node or city that have lower cost value or distance
{
	int now, cost;
	bool operator < (const Node &A) const 
	{
		return cost > A.cost;
	}
};

int search() // in this particular A* algorithm, we combined the used of heuristic function and search algorithm. 
{              // the search algorithm use is djikstra
	priority_queue<city> q;
	q.push((city){s, 0});
	int distance[N];
	memset(distance, 0x3f, sizeof distance);
	distance[startPoint] = 0;
	
	while (!q.empty()) // loop until the priority queue is empty or target city is reached
	{
		Node u = q.top();
		q.pop();
		int now = u.now;
		if (now == t) return distance[target];
		for (int i = 0; i < n; i++) 
		{
			int v = i, w = distance[now][i];
			if (distance[v] > distance[now] + w) 
			{
				distance[v] = distance[now] + w;
				q.push((Node){v, distance[v]});
			}
		}
	}
return -1;
}

int main()    
{
	cin >> citySize >> m;
	for (int i = 0; i < n; i++) 
	{
		cin >> f[i][0] >> f[i][1];
	}
	startPoint = n; target = 0;
	for (int i = 0; i <= n; i++) 
	{
		for (int j = 0; j <= n; j++) 
		{
			distance[i][j] = abs(f[i][0] - f[j][0]) + abs(f[i][1] - f[j][1]);
		}
	}
	cout << search() << endl;
	return 0;
}
