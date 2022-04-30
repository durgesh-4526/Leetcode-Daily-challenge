class Solution {
public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        int n = equations.size();
		 
        unordered_map<string,int> idx_map; // build a string to index map
		vector<vector<double>> matrix(2*n,vector<double>(2*n,DBL_MAX)); // build 2D matrix contains at most 2*n unique string
        int idx = 0; // count how many unique strings and give them index
        for(int i = 0 ; i < n; i++)
        {
            if(!idx_map.count(equations[i][0])) idx_map[equations[i][0]] = idx++; // give them index
            if(!idx_map.count(equations[i][1])) idx_map[equations[i][1]] = idx++;
            int a = idx_map[equations[i][0]], b = idx_map[equations[i][1]]; 
            matrix[a][b] = values[i]; // a -> b
            matrix[b][a] = 1.0/values[i]; // b -> a
        }
       
        // simple Floyd-Warshall
		// O(N^3) loop 
        for(int k=0; k<idx; k++) {
            for(int i=0; i<idx; i++) {
                for(int j=0; j<idx; j++) {
                    if(matrix[i][k] < DBL_MAX && matrix[k][j] < DBL_MAX) {
                      matrix[i][j] = min(matrix[i][j], matrix[i][k] * matrix[k][j]);
                    } 
                }
            }
        }
        vector<double> res;

        for(int i = 0 ; i < queries.size(); i++)
        {
            if(idx_map.count(queries[i][0]) && idx_map.count(queries[i][1])) // check in idx_map or not, ex: equations:["a","b"] , queries: ["x" , "y"]
            {
                int a = idx_map[queries[i][0]], b = idx_map[queries[i][1]];
                if(matrix[a][b] == DBL_MAX) res.push_back(-1);  // don't find a path 
                else res.push_back(matrix[a][b]); // find a path
            }
            else res.push_back(-1); 
        }
        
        return res;
    }
};
