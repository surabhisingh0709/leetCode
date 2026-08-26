class Solution {
public:
    void traverse(int r, int c,vector<vector<int>>&vis,vector<vector<char>>&grid,int dRow[] , int dCol[] , int m , int n )
    {
        vis[r][c]=1;
        for(int i =0 ; i<4 ; i++)
        {
            int nRow = r + dRow[i];
            int nCol = c + dCol[i];
            if(nRow>=0 && nRow<m && nCol>=0 && nCol<n && vis[nRow][nCol]==0 && grid[nRow][nCol]=='1')
            {
                
                traverse(nRow, nCol , vis,grid,dRow,dCol,m,n);
                
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {

        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>>vis(m,vector<int>(n,0));
        int ans=0;
        int dRow[] = {-1,0,1,0};
        int dCol[] = {0,1,0,-1};

        for(int i =0 ; i< m ; i++)
        {
            for(int j =0 ; j< n ; j++)
            {
                if(vis[i][j]==0 && grid[i][j]=='1')
                {
                    traverse(i,j,vis,grid,dRow,dCol,m,n);
                    ans++;
                }
            }
        }
        return ans;

        
        
    }
};