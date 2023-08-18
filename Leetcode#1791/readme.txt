The solution file solves Leetcode 1791 Find Center of a Graph and I like this problem.

Intuition? Two pointer approach, check whether each node in an undirected graph connects to all nodes except itself. The insight is that to be the center node, 
it must have n-1 connections where n is the number of edges.

Time complexity? O(n^2) for n number of edges

Space complexity? O(1), no additional spaces for data, only variables and accessors used.
