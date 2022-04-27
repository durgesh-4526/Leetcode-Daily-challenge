class Solution {
public:
    void dfs(int i, vector<int>& visited, vector<int>& nodes, string& componentString, string& s, vector<vector<int>>& graph)
{
    // Storing the nodes and also the string of this component
	nodes.push_back(i);
	componentString += s[i];
	visited[i] = 1;

	for (auto node : graph[i])
	{
		if (!visited[node])
		{
			dfs(node, visited, nodes, componentString, s, graph);
		}
	}
}

string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
	// Creating a Graph with the given pairs 
	int n = s.size();
	vector<vector<int>> graph(n);
	for (auto p : pairs)
	{
		int u = p[0], v = p[1];
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	// Finding the components for the given graph
	vector<int> visited(n, 0);
	for (int i = 0; i < n; ++i)
	{
		if (!visited[i])
		{
			vector<int> nodes;
			string componentString;
			dfs(i, visited, nodes, componentString, s, graph);
            
            // Sorting the nodes nad componentString to make the nodes accending and component string in lexicographically order
			sort(nodes.begin(), nodes.end());
			sort(componentString.begin(), componentString.end());
            
            // Replace the new lexicographically string of the component with the old string at the indices of the components
			for (int k = 0; k < nodes.size(); ++k)
			{
				s[nodes[k]] = componentString[k];
			}
		}
	}
    
    // Finally Return the answer
	return s;
}
};
