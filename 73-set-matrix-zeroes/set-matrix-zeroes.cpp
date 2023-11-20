class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int fr=0,fc=0;

        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j] == 0){
                    if(i==0) fr=1;
                    if(j==0) fc=1;
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        //INNER MATRIX
        for(int i=1;i<matrix.size();i++){
            for(int j=1;j<matrix[0].size();j++){
                if(matrix[0][j] == 0 || matrix[i][0] == 0){
                    matrix[i][j] = 0;
                }
            }
        }

        if(fr){
            for(int j=0;j<matrix[0].size();j++){
                    matrix[0][j] = 0;
            }
        }

        if(fc){
            for(int j=0;j<matrix.size();j++){
                    matrix[j][0] = 0;
            }
        }

    }
};