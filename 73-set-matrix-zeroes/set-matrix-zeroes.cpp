class Solution {
public:
    
    void setZeroes(vector<vector<int>>& matrix)
    {
        int m = matrix.size();
        int n = matrix[0].size();

       /* vector<int> markRow(m,0);
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
       }*/

    bool col0 = true;
        
        for(int i = 0; i < m; i++){
            if(matrix[i][0] == 0)
                col0 = false;
            
            for(int j = 1; j < n; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        for(int i = 1; i < m; i++){
            for(int j = 1; j < n; j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            }
        }

        if(matrix[0][0] == 0){
            for(int j = 0; j < n; j++)
                matrix[0][j] = 0;
        }

        if(!col0){
            for(int i = 0; i < m; i++)
                matrix[i][0] = 0;
        }
    }





    
};