class Solution {
public:
    
    void setZeroes(vector<vector<int>>& mat)
    {
        int m = mat.size();
        int n = mat[0].size();

        vector<int> markRow(m,0);
        vector<int> markCol(n,0);

        //iterating and preparing markrow and markcol arrays
        // if mark row array is 1 that means all in that row are 0
        for(int i =0 ; i<m ; i++)
        {
            for( int j =0 ;j < n ; j++)
            {
                if(mat[i][j]==0)
                {
                    markRow[i]=1;
                    markCol[j]=1;
                }
            }
       }

       for(int i =0 ; i<m ; i++)
        {
            for( int j =0 ;j < n ; j++)
            {
                if(markRow[i]==1 || markCol[j]==1) mat[i][j]=0;
            }
       }
 
    }
};