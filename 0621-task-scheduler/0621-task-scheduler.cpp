class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int>mp;
        priority_queue<int>pq;
        int time=0;
        for(auto it:tasks){
            mp[it]++;
        }
        for(auto it:mp){
            pq.push(it.second);
        }
        while(!pq.empty()){
            vector<int>temp;
            for(int i=0;i<=n;i++){
                if(!pq.empty()){
            int count=pq.top();
            pq.pop();
            count--;
            if(count>0)temp.push_back(count);}
            time++;
            
            if(pq.empty()&&temp.empty()){
                break;
            }
            }
            for(auto it:temp)pq.push(it);
        }
        return time;
    }
};