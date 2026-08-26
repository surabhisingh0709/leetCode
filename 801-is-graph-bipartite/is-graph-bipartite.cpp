class Solution {
public:
    bool dfs(int i ,int parent,vector<int>&color, vector<vector<int>>& graph ,bool clr )
    {
        color[i]=clr;
        
        for(int v:graph[i])
        {
            if(v!=parent && color[v]!=-1)//cycle present
            {
                if(color[v]==clr) return false;
                continue;
            }
            else if (v!=parent && color[v]==-1)
            {
                if(!dfs(v,i,color,graph,!clr)) return false;//to continue checking further ans not just return the first
            }
        }
        return true;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {

        int n = graph.size();
        vector<int>color(n,-1);

        for(int i =0 ; i< n ; i++)
        {
            if(color[i]==-1)
            {
                bool clr =0;
                bool ans = dfs(i,-1,color,graph,clr);
                if(!ans) return false;
            }
        }
        return true;
               
    }
};