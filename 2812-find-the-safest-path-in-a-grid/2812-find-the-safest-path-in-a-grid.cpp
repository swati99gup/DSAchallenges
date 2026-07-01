class Solution {
public:

bool checksafeReach( vector<vector<int>>&dist,int safe,int n){
    vector<vector<int>>vis(n,vector<int>(n,0));
   queue<pair<int,int>>q;
   if(dist[0][0]<safe)return false;
    int dr[]={0,-1,0,1};
    int dc[]={-1,0,1,0};
    q.push({0,0});
    vis[0][0]=1;
    while(!q.empty()){
         auto [r,c]=q.front();

        q.pop();
        if(r==n-1&&c==n-1)return true;
    for(int k=0;k<4;k++){
       
       int nr=r+dr[k];
    int nc=c+dc[k];
    if(nr>=0&&nr<n&&nc>=0&&nc<n&&vis[nr][nc]==0&&dist[nr][nc]>=safe){
q.push({nr,nc});
vis[nr][nc]=1;
    }
    }  
    }
    return false;
}
    int maximumSafenessFactor(vector<vector<int>>& grid) {
        int ans=0;
        int n=grid.size();
        vector<vector<int>>dist(n,vector<int>(n,INT_MAX));
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    q.push({i,j});
                    dist[i][j]=0;
                    }
            }
        }
        int dr[]={0,-1,0,1};
    int dc[]={-1,0,1,0};
        while(!q.empty()){
            auto [r,c]=q.front();
            q.pop();
for(int k=0;k<4;k++){
    int nr=r+dr[k];
    int nc=c+dc[k];
    if(nr>=0&&nr<n&&nc>=0&&nc<n&&dist[nr][nc]==INT_MAX){
        dist[nr][nc]=dist[r][c]+1;
        q.push({nr,nc});
    }
}
        }

        int low=0;
        int high=0;
       
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                high=max(high,dist[i][j]);
            }
        }
while(low<=high){
    int mid=low+(high-low)/2;
    if(checksafeReach(dist,mid,n)==true){
        ans=mid;
        low=mid+1;
}
else high=mid-1;}
return ans;
    }
};