class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        queue<pair<int, int>> que; 
        set<pair<int,int>> s; 
        int n = graph.size(),FinalNodes = ((1<<n)-1), temp, pathLen = 0;
        
        for(int i=0;i<n;i++) que.push( {i, (1<<i)} );

        
        while( que.empty() == false ){
            
            temp = que.size();
            while( temp ){

                auto p = que.front();
                que.pop();

                for(auto connectedNode : graph[p.first]){

                    int mask = (1<<connectedNode); 
                    int nodesVisited = ( p.second & mask )? (p.second) : (p.second + mask);
                    if( nodesVisited == FinalNodes ) return (pathLen + 1);
                    
                    if( s.count({connectedNode, nodesVisited}) == 0 ){
                        que.push({connectedNode, nodesVisited});
                        s.insert({connectedNode, nodesVisited});
                    }
                }
                
                temp -= 1;
            }
            
            pathLen += 1;
        }
        return 0;
    }
};
