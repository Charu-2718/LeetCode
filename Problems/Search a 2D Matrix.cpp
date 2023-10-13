class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows= matrix.size();
        int columns= matrix[0].size();
        bool ans=0;
        for ( int i = 0 ; i< rows ; i++ ){
            for ( int j = 0 ; j < columns ; j++ ){
                if ( target == matrix[i][j] ){
                    return true ;
                    ans = 1 ;
                    
                }
                
            }
        }
        return false ;


    }
};