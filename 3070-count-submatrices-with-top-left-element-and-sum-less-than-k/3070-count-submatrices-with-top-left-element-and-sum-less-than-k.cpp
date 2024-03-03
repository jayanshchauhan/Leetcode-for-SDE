class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
    //    vector<vector<int>> res;
        int count=0;
        int n=grid.size();
        int m=grid[0].size();
        int res[n+1][m+1];
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 && j==0){
                    res[i][j] = grid[i][j];
                }
                else if(i==0){
                    res[i][j] = res[i][j-1] + grid[i][j];
                    continue;
                }else if(j==0){
                    res[i][j] = res[i-1][j] + grid[i][j];
                    continue;
                }else{
                    res[i][j] = res[i-1][j] + grid[i][j] + res[i][j-1] - res[i-1][j-1];
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(res[i][j] <= k){
                    count++;
                }
            }
        }
        return count;
    }
};