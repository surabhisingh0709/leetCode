class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        //transpose of matrix
        for(int i =0 ; i< n ; i++)
        {
            for(int j =0 ; j<i ; j++)
            {
                swap(matrix[i][j] , matrix[j][i]);
            }
        }

        //reverse every row
        for( int k =0 ; k<n ; k++)
        {
            for(int p =0 ; p<n/2 ; p++)
            {
                swap(matrix[k][p] , matrix[k][n-1-p]);
            }
        }
    }
};