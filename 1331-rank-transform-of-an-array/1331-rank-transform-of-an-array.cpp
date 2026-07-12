class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>temp=arr;
        vector<int>ans;
        sort(temp.begin(),temp.end());
        unordered_map<int,int>mp;
        int r=1;
        for(auto it:temp){
            if(mp.find(it)==mp.end()){
                mp[it]=r++;
            }
        }
        for(auto it:arr){
            ans.push_back(mp[it]);
        }
return ans;
    }
};