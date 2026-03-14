class Solution {
public:
    
    void setZeroes(vector<vector<int>>& mat)
    {
       
       int m = mat.size();
       int n = mat[0].size();
       vector<vector<int>> ans = mat;
       for(int i = 0 ; i < m ; i++)
       {
        for(int j=0 ; j<n ;j++)
        {
            if(mat[i][j]==0)
            {
                for( int p=0 ; p<m ;p++) ans[p][j]=0;
                for( int q=0 ; q<n ;q++) ans[i][q]=0;

            }
        }
       }
       mat=ans;
    }
};