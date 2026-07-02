class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>dist(n,vector<int>(m,INT_MAX));
       dist[0][0]=grid[0][0];
       deque<pair<int,int>>dq;
       dq.push_front({0,0});
     
        int dr[]={0,-1,0,1};
        int dc[]={-1,0,1,0};
        while(!dq.empty()){
            auto [r,c]=dq.front();
            dq.pop_front();
           
for(int k=0;k<4;k++){
    int nr=r+dr[k];
    int nc=c+dc[k];
    if(nr>=0&&nr<n&&nc>=0&&nc<m){
      int newcost=dist[r][c]+grid[nr][nc];
      if(newcost<dist[nr][nc]){
      dist[nr][nc]=newcost;
        if(grid[nr][nc]==0)dq.push_front({nr,nc});
    else dq.push_back({nr,nc});
      }
    }
}
        }
        return dist[n-1][m-1]<=health-1;
    }
};