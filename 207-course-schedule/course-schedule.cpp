class Solution {
public:
    bool isCyclic(int i, int n ,vector<int>&vis,vector<int>&dfsVis,vector<vector<int>> &adjList )
    {
        vis[i]=1;
        dfsVis[i]=1;
        for(int v:adjList[i])
        {
            if(vis[v]==0)
            {
                if(isCyclic(v,n,vis,dfsVis,adjList)) return true;
            }
            else if(dfsVis[v]==1)return true;
        }
        dfsVis[i]=0;
        return false;

    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adjList(numCourses);

        for(int i =0 ; i<prerequisites.size() ; i++)
        {
            int u = prerequisites[i][1];
            int v = prerequisites[i][0];

            adjList[u].push_back(v);
        }
        vector<int>vis(numCourses,0);
        vector<int>dfsVis(numCourses,0);

        for(int i =0 ; i<numCourses ; i++)
        {
            if(!vis[i])
            {
                if(isCyclic(i,numCourses,vis,dfsVis,adjList)) return false;
            }
        }
        return true;
        

    }
};