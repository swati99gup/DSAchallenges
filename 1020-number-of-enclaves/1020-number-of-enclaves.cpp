class Solution {
public:
void dfs(int r,int c,int dr[],int dc[],vector<vector<int>>&vis,vector<vector<int>>& grid){
     int n=grid.size();
     int m=grid[0].size();
    for(int k=0;k<4;k++){
        int nr=r+dr[k];
        int nc=c+dc[k];
        if(nr>=0&&nr<n&&nc>=0&&nc<m&&!vis[nr][nc]&&grid[nr][nc]==1){
            vis[nr][nc]=1;
            dfs(nr,nc,dr,dc,vis,grid);
        }
    }
}
    int numEnclaves(vector<vector<int>>& grid) {
     int n=grid.size();
     int m=grid[0].size();
     vector<vector<int>>vis(n,vector<int>(m,0));
     int dr[]={0,-1,0,1};
     int dc[]={-1,0,1,0};
     for(int i=0;i<n;i++){
        if(grid[i][0]==1&&!vis[i][0]){
            vis[i][0]=1;
            dfs(i,0,dr,dc,vis,grid);
        }
       if(grid[i][m-1]==1&&!vis[i][m-1]){
            vis[i][m-1]=1;
            dfs(i,m-1,dr,dc,vis,grid);
        }
     }
     for(int j=0;j<m;j++){
        if(grid[0][j]==1&&!vis[0][j]){
            vis[0][j]=1;
            dfs(0,j,dr,dc,vis,grid);
        }
       if(grid[n-1][j]==1&&!vis[n-1][j]){
            vis[n-1][j]=1;
            dfs(n-1,j,dr,dc,vis,grid);
        }
     }
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(vis[i][j]==1)grid[i][j]=0;
        }
     }
     int cnt=0;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==1)cnt++;
        }
     }
     return cnt;
    }
};