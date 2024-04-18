class Solution {
public:
/*
How do we know the land that is on the outside? Do we do some graph traversal?
Think about the definition carefully and come up with the simplest way!
Definition of perimeter = the part it touches the water.
Now, its easy! per each land block, look around, and see if the neighbor is water!
*/
    int checkWater(vector<vector<int>>& grid, int i, int j){
        if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == 0)
            return 1;
        return 0;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter = 0;

        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == 1){
                    perimeter += checkWater(grid,i-1,j);
                    perimeter += checkWater(grid,i+1,j);
                    perimeter += checkWater(grid,i,j-1);
                    perimeter += checkWater(grid,i,j+1);
                }
            }
        }
        return perimeter;
    }
};