class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {

        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>>ans(m,vector<int>(n,-1));
        queue<pair<pair<int,int>,int>>q; //{row,col},dist

        for(int i =0 ; i<m ; i++)
        {
            for(int j =0 ; j<n ; j++)
            {
                if(mat[i][j]==0)
                {
                    ans[i][j]=0;
                    q.push({{i,j},0});   
                }           
            }
        }

        int dRow[]={-1,0,1,0};
        int dCol[]={0,1,0,-1};

        while(!q.empty())
        {
            int r = q.front().first.first;
            int c = q.front().first.second;
            int d = q.front().second;
            q.pop();
            ans[r][c]=d;

            for(int i =0 ; i<4 ; i++)
            {
                int nRow = r + dRow[i];
                int nCol = c + dCol[i];

                if(nRow>=0 && nRow<m && nCol>=0 && nCol<n && ans[nRow][nCol]==-1)
                {
                    q.push({{nRow,nCol},d+1});
                    ans[nRow][nCol]=d;
                }
            }

        }
        return ans;


        
    }
};