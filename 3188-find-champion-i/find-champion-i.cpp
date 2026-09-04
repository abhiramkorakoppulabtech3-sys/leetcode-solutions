class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int count=0;
       for(int i=1;i<grid.size();i++){
        if(grid[count][i]==0){
            count=i;
        }
       }
       return count;
        
    }
};