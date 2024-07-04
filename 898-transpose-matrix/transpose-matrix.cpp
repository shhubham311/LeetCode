class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n = matrix[0].size();
        int m = matrix.size();
        vector<vector<int>> ans(n, vector<int>(m, 0));

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                //swap(matrix[i][j], matrix[j][i]);
                ans[j][i] = matrix[i][j];
            }
        }
        return ans;
    }
};