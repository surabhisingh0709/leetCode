class Solution {
public:
    
    void setZeroes(vector<vector<int>>& matrix)
    {
        int m = matrix.size();
        int n = matrix[0].size();

    //-------as in the below soln we r using 2 more arrays as markers space complexity inc 
    //using row0 and col0 as markers so we dont need any extra space 
        bool firstRowZero=false;
        bool firstColZero=false;

        for(int i = 0 ; i< n ; i++)
        {
            if(matrix[0][i] == 0 ) 
            {
                firstRowZero = true;
                break;
            }
        }

        for(int i = 0 ; i< m ; i++)
        {
            if(matrix[i][0] == 0 ) 
            {
                firstColZero = true;
                break;
            }
        }

        //go el by el to mark the marker rows and cols
        for(int i =1 ; i<m ; i++)
        {
            for(int j =1 ; j< n ;j++)
            {
                if(matrix[i][j] == 0 )
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }

        //go element by element in inner matrix and check its corresponding markers to change or not 

        for(int i =1 ; i<m ; i++)
        {
            for(int j =1 ; j<n ; j++)
            {
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j]=0;
                }
            }
        }

        if (firstRowZero)
        {
            for(int j =0 ; j<n ; j++)
            {
                matrix[0][j] = 0;
            }
        }

        if (firstColZero)
        {
            for(int i =0 ; i<m ; i++)
            {
                matrix[i][0] = 0;
            }
        }



    //--------  using extra arrays as markers for marking row/col is 0 or not!
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

    }

    
};