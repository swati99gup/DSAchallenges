class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<int>ans;
        priority_queue<pair<int,int>>pq;
        for(auto it:nums){
            mp[it]++;

        }
        for(auto it:mp){
            pq.push({it.second,it.first});
           
        }
        while(k>0){
           auto [x,y]=pq.top();
            ans.push_back(y);
            pq.pop();
            k--;
        }
        return ans;
    }
};