class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<int,int>>q;
        vector<vector<int>>vis(m,vector<int>(n,0));

        for(int i =0 ; i< m ; i++)//first col and last col
        {
            if(grid[i][0] ==1) 
            { 
                q.push({i,0});
                vis[i][0]=1;
            }
            if(grid[i][n-1]==1)
            {
                q.push({i,n-1});
                vis[i][n-1]=1;
            }

        }

        for(int i =0 ; i< n ; i++)//first row and last row
        {
            if(grid[0][i] ==1) 
            {
                q.push({0,i});
                vis[0][i]=1;
            }
            if(grid[m-1][i]==1) 
            {
                q.push({m-1,i});
                vis[m-1][i]=1;
            }
        }

        int dRow[] = {-1,0,1,0};
        int dCol[] = {0,1,0,-1};

        while(!q.empty())
        {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            for(int i =0 ; i< 4 ; i++)
            {
                int nRow = r + dRow[i];
                int nCol = c + dCol[i];

                if(nRow>=0 && nRow<m && nCol>=0 && nCol<n && vis[nRow][nCol]==0 && grid[nRow][nCol]==1)
                {
                    q.push({nRow,nCol});
                    vis[nRow][nCol]=1;
                }
            }

        }
        int ans=0;

        for(int i =0 ; i< m ; i++)
        {
            for(int j =0 ; j<n ; j++)
            {
                if(grid[i][j] != vis[i][j]) ans++;
            }
        }
        return ans;


        
    }
};