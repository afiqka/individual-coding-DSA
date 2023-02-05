# individual-coding-DSA
# Dynamic programming with drone to solve TSP

TSP using drone is a travelling salesman problem which involved the use of unmaned aerial vehicles which is commonly known as drone. This problem arise due to several known retailers and logistic service providers such as Amazon, Singapore post and DHL has been experimenting the use of drone. The drone is use to support the delivery of parcels and mail. The most promosing way is by the new operating model that combine the use of regular delivery truck and drone to make deliveries. With this, the high capacity and long range of the truck can be combined with the flexibility and speed of a drone.

There are many algorithm that can be used to solve this particular problem. One of the algorithm that I choose is by using dynamic programming. The basic idea is that dynamic programming allows us to break down the problems into subproblems and solve it once. This is due to the fact that dynamic programming use the memoization method which the result will be save for later use. This is good as we do not have to repeat a problem over and over again in order to solve new problem. The algorithm starts by building a table of values that represent the optimal cost of visiting a subset of nodes starting from drone initial position and returning to the initial position.

Main steps:
1. Define the state: The state of the algorithm is represented by the position of the drone and the subset of nodes that have been visited.
2. Define the base case: The base case is when the drone has visited all the nodes and has returned to the starting node.
3. Define the recursive case: The recursive case is when the drone has not yet visited all the nodes. For each possible next node, the cost of visiting that node and returning to the starting node is calculated using the subproblem solution stored in the table.
4. Store the subproblem solution: The optimal cost of visiting a subset of nodes is stored in the table for later use.
5. Return the optimal solution: The optimal solution is obtained by finding the minimum cost of visiting all nodes and returning to the starting node.

# Difference between dynamic programming and dynamic programming with drone

![image](https://user-images.githubusercontent.com/103496058/216831309-36d1436a-8979-4c58-9370-26212f6f35da.png)



