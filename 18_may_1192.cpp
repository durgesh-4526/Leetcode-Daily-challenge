int dfs(int start_node, int parent_node, int level, vector<int> &marked, vector<vector<int>> &edges, vector<vector<int>> &ans){
    marked[start_node] = level;
    for (int to_node: edges[start_node]){        
        if (to_node == parent_node){continue;}
        if (marked[to_node] == -1){
            int sub = dfs(to_node, start_node, level + 1, marked, edges, ans);
            marked[start_node] = min(marked[start_node], sub);
        }
        else{// marked[to_node] is not -1, have been visited
            marked[start_node] = min(marked[start_node], marked[to_node]);
        }
    }
    if (start_node != 0){
        if (marked[start_node] == level){
            // they are not in a loop, so the edge between start and parent is critical connection 
            ans.push_back({start_node, parent_node});
        }        
    }
    return marked[start_node];
}

class Solution {
public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<vector<int>> edges(n);
        for (auto c: connections){
            int a = c[0], b = c[1];
            edges[a].push_back(b);
            edges[b].push_back(a);
        }
        vector<vector<int>> ans;
        vector<int> marked(n, -1);
        // marked[0] = 0;
        int result = dfs(0, -1, 0, marked, edges, ans);
        return ans;
    }
};
