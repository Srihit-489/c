
int checkArea(int i,int j,int** grid,int gridSize,int gridColSize){
    int count = 1;
        grid[i][j] = 0;
        if(i+1 < gridSize && grid[i+1][j] == 1){
            count = count + checkArea(i+1,j,grid,gridSize,gridColSize);
        }
        if(i-1 >= 0 && grid[i-1][j] == 1){
            count = count + checkArea(i-1,j,grid,gridSize,gridColSize);
        }
        if(j+1 < gridColSize && grid[i][j+1] == 1){
            count = count + checkArea(i,j+1,grid,gridSize,gridColSize);
        }
        if(j-1 >= 0 && grid[i][j-1] == 1){
            count = count + checkArea(i,j-1,grid,gridSize,gridColSize);
        }
        
        return count;
}

int maxAreaOfIsland(int** grid, int gridSize, int* gridColSize){
    int highest = 0;
    for(int i=0;i<gridSize;i++){
        for(int j=0;j<*gridColSize;j++){
            if(grid[i][j] == 1){
                int temp = checkArea(i,j,grid,gridSize,*gridColSize);
                if(temp > highest){
                    highest = temp;
                }
            }
        }
    }
    return highest;

}
