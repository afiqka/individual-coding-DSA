#include<iostream>
#include<vector>
using namespace std;

int dynamic(const, int, int, int);

int main()
{
	vector<vector<int>>cities = {{0, 10, 15, 20  },{5,0,9,10}, {6,13,0,12},{8,8,9,0}};   //distance for every node which is city
	
	vector<vector<int>> states (city.size());
	
	for(auto&closest : states)
	closest = vector<int>((1<<city,size())-1, max); // find closet distance for each node
	
	cout<<"the optimal route is "<<dynamic(city, 0 , 1, states)<<endl;
	
	return 0;
}

int dynamic(const vector<vector<int>>&city, int positionition, int visited, vector<vector<int>>&states) // dynamic programming approach, memoization
{
	if(states[position][visited] != max) 
    return statess[position][visited];
	
	if(visited == ((1 << city.size()) - 1))  // return the position to starting city
    return city[pos][0]; 

    for(int i = 0; i < city.size(); ++i)
    {
        // can't visit ourselves unless we're ending & skip if already visited
        if(i == pos || (visited & (1 << i)))
            continue;

        int distance = city[position][i] + dynamic(city, i, visited | (1 << i), states);
        if(distance < states[position][visited])
            states[position][visited] = distance;
    }

    return states[position][visited]; //store the most optimal solution and return it
}
