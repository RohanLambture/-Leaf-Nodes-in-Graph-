Problem Description: Leaf Nodes in Graph

You are given an undirected graph represented by a set of vertices and edges. Each vertex is labelled with an uppercase letter ('A' to 'Z'). Your task is to implement a program that finds and prints the leaf nodes of the graph after removing a specified vertex along with its incident edges.

Input:

The input consists of the following components:

1. An integer `t` (1 <= t <= 26): The number of vertices in the graph.
2. A single uppercase letter `x` representing the vertex to be removed.
3. An integer `line` (1 <= line <= 1000): The number of edges in the graph.
4. `line` lines contain two uppercase letters `u` and `v` representing an undirected edge between vertices `u` and `v`.

Output:

Print two lines of output:

1. After removing the specified vertex and its incident edges, The first line should contain a space-separated list of leaf nodes in lexicographically increasing order.
2. The second line should contain a space-separated list of leaf nodes in lexicographically increasing order after removing the specified vertex, its incident edges, and any leaf nodes that become isolated due to the removal.

Constraints:

- The number of vertices `t` is in the range 1 to 26.
- The vertex to be removed is a valid vertex in the graph.
- Each undirected edge (u, v) indicates that there is an edge between vertices `u` and `v`.
- The vertices and edges are represented by uppercase letters.
- The output should be in lexicographically increasing order.
- The graph may not be connected, and there may be isolated vertices.
- Leaf nodes are vertices with a degree of 1 (only one incident edge).
- After removing the specified vertex, its incident edges, and isolated leaf nodes, the remaining graph may have new leaf nodes. Return the leaf nodes after this modification.
- The initial graph is undirected, and removing a vertex implies removing all edges incident to that vertex.
