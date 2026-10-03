class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int count = 0;
        vector<vector<int>> row;
        vector<vector<int>> col;
        for(int i = 0; i < grid.size(); i++) {
            vector<int> row1;
            for(int j = 0; j < grid.size(); j++) {
                row1.push_back(grid[i][j]);
            }
            row.push_back(row1);
        }
        for(int i = 0; i < grid.size(); i++) {
            vector<int> col1;
            for(int j = 0; j < grid.size(); j++) {
                col1.push_back(grid[j][i]);
            }
            col.push_back(col1);
        }
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid.size(); j++) {
                int num = 0;
                for(int k = 0; k < grid.size(); k++) {
                    if(row[i][k] == col[j][k]) {
                        num++;
                    }
                }
                if(num == grid.size()) {
                    count++;
                }
            }
        }
        return count;
    }
};
