class Solution {
public:
    void dfs(int r,int c,vector<vector<char>>& board,vector<vector<char>>&mark,int m, int n)
    {
        int dRow[]= {-1,0,1,0};
        int dCol[]={0,1,0,-1};

        for(int k =0 ; k< 4 ; k++)
        {
            int nRow= r+dRow[k];
            int nCol = c+dCol[k];
            if(nRow>=0 && nRow<m && nCol>=0 && nCol<n && board[nRow][nCol]=='O' && mark[nRow][nCol]==0)
            {
                mark[nRow][nCol]=1;
                dfs(nRow,nCol,board,mark,m,n);
            }
        }
    }
public:
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();

        vector<vector<char>>mark(m,vector<char>(n,0));

        for(int i =0 ; i<n ; i++)
        {
            //first row
            if(!mark[0][i] && board[0][i] == 'O')
            {
                mark[0][i]=1;
                dfs(0,i,board,mark,m,n);
            }
            //last row
            if(!mark[m-1][i] && board[m-1][i] == 'O')
            {
                mark[m-1][i]=1;
                dfs(m-1,i,board,mark,m,n);
            }
        }

        for(int i =0 ; i<m ; i++)
        {
            //first col
            if(!mark[i][0] && board[i][0] == 'O')
            {
                mark[i][0]=1;
                dfs(i,0,board,mark,m,n);
            }

            //last col
            if(!mark[i][n-1] && board[i][n-1] == 'O')
            {
                mark[i][n-1]=1;
                dfs(i,n-1,board,mark,m,n);
            }       
        }

        //which cannot be changed are marked as 1

        for(int i =0 ; i<m ; i++)
        {
            for(int j =0 ; j< n ; j++)
            {
                if(mark[i][j]==0 && board[i][j]=='O') board[i][j] = 'X';
                
            }
        }
    }
};