class Solution {
public:
    
    void checkWater(vector<vector<int>>& grid,vector<vector<bool>>& visited, int i, int j,pair<int,int> &pairr,int maxx){
        if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == 0 || visited[i][j] == true)
            return;
        
        visited[i][j] = true;
        if(maxx<i+j){
            maxx = i+j;
            pairr.first = i;
            pairr.second = j;
        }
        checkWater(grid,visited,i-1,j,pairr,maxx);
        checkWater(grid,visited,i+1,j,pairr,maxx);
        checkWater(grid,visited,i,j-1,pairr,maxx);
        checkWater(grid,visited,i,j+1,pairr,maxx);
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& grid) {
        vector<vector<bool>> visited(grid.size(),vector<bool>(grid[0].size()));
        vector<vector<int>> result;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == 1 && visited[i][j] == false){
                    vector<int> ans;
                    ans.push_back(i);
                    ans.push_back(j);
                    pair<int,int> pairr;
                    bool check = false;
                    if(visited[i][j] == false){
                        int maxx = INT_MIN;
                        checkWater(grid,visited,i,j,pairr,maxx);
                        ans.push_back(pairr.first);
                        ans.push_back(pairr.second);
                        check = true;
                    }
                    if(!check){cout<<"hu";
                        ans.push_back(i);
                        ans.push_back(j);
                    }
                    result.push_back(ans);
                }
            }
        }
        return result;
    }
};