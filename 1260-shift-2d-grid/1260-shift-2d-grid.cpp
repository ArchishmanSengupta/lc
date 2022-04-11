class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
            int n = grid.size();
        int m = grid[0].size();
        int total = grid.size() * grid[0].size();
        k = k % total;
        if (k == 0)
            return grid;
        int arr[total];
        int arr_ind = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                arr[arr_ind] = grid[i][j],
                arr_ind++;
        arr_ind = total - k;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                grid[i][j] = arr[arr_ind],
                arr_ind = (arr_ind + 1) % total;
        return grid; 
    }
};