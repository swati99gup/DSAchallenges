class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        vector<int>visit(n,0);
        int completecnt=0;
        for(auto it:edges){
            int u=it[0];
            int v=it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);

        }
        for(int i=0;i<n;i++){
            if(!visit[i]){
              
                queue<int>q;
                 visit[i]=1;
                q.push(i);
                int nodes=0;
                int edgecnt=0;
               
                while(!q.empty()){
                    int node=q.front();
                    q.pop();
                    nodes++;
                    edgecnt+=adj[node].size();
                    for(auto neigh:adj[node]){
                        if(!visit[neigh]){
                        visit[neigh]=1;
                        q.push(neigh);}
                    }
                }
                            if(edgecnt/2==nodes*(nodes-1)/2)completecnt++;

            }
        }
        return completecnt;
    }
};