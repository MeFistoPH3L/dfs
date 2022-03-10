# Search in Depth
This is one of the basic algorithms on graphs.

Depth search results in finding lexicographically the first path in the graph.

The algorithm works for O (N+M).

# Applications of the algorithm

*Search for any path in the graph.

*Finding lexicographically the first path in the graph.

* Checking if one vertex of the tree is an ancestor of another vertex:
At the beginning and end iterations of the search in depth will remember the "time" of entry and exit at each vertex. Now for O(1) you can find the answer: vertex i is an ancestor 
of vertex j if and only if start_i < start_j and end_i > end_j.

* The LCA problem (least common ancestor).

* Topological sorting:
Run a series of searches in depth to bypass all vertices in the graph. Sort the vertices by time of exit in descending order - this will be the answer.

* Checking the graph for acyclicity and finding a cycle

* Find strong connectivity components:
First do a topological sort, then transpose the graph and do a series of depth searches again in the order determined by the topological sort. Each search tree is a strongly connected component.

* Bridge search:
First, we turn the graph into an oriented graph by doing a series of searches in depth, and orienting each edge as we tried to traverse it. Then we find strongly connected components. Bridges are those edges whose ends belong to different strongly connected components.
