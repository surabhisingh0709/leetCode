class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adjList(numCourses);

        for(int i =0 ; i<prerequisites.size() ; i++)
        {
            int u = prerequisites[i][1];
            int v = prerequisites[i][0];

            adjList[u].push_back(v);
        }

        vector<int>indegree(numCourses,0);

        for(int i =0 ; i<numCourses ; i++)
        {
            for(int x:adjList[i])
            {
                indegree[x]++;
            }
        }

        queue<int>q;
        vector<int>ans;
        for(int i =0 ; i<numCourses ; i++)
        {
            if(indegree[i]==0) q.push(i);
        }

        while(!q.empty())
        {
            int v = q.front();
            q.pop();
            for(int x: adjList[v])
            {
                indegree[x]--;
                if(indegree[x]==0)q.push(x);
            }
            ans.push_back(v);
        }
        if(ans.size() != numCourses)return {};

        return ans;
        
    }
};