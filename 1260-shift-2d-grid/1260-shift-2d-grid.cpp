class Solution {
public:

    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
        k=k%(m*n);
        vector<vector<int>>ans(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
           int idx=(m*i+j);
           int newidx=(idx+k)%(m*n);
           int newr=newidx/m;
           int newc=newidx%m;
ans[newr][newc]=grid[i][j];
            }
        }
        return ans;
    }
};