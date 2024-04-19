class Solution {
public:
    void checkWater(vector<vector<char>>& grid,vector<vector<bool>>& visited, int i, int j){
        if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == '0' || visited[i][j] == true)
            return;
        
        visited[i][j] = true;
        
        checkWater(grid,visited,i-1,j);
        checkWater(grid,visited,i+1,j);
        checkWater(grid,visited,i,j-1);
        checkWater(grid,visited,i,j+1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        vector<vector<bool>> visited(grid.size(),vector<bool>(grid[0].size()));
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == '1'){
                    if(visited[i][j] == false){
                        checkWater(grid,visited,i,j);
                        ans+=1;
                    }
                }
            }
        }
        return ans;
    }
};