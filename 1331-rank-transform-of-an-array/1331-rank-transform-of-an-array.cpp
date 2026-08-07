class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        vector<int>arr2=arr;
        vector<int>ans;
sort(arr2.begin(),arr2.end());
        unordered_map<int,int>mp;
        int rank=1;
        for(auto it:arr2){
           if(mp.find(it)==mp.end()){
            mp[it]=rank;
            rank++;
           }
        }
        for(auto it:arr){
            ans.push_back(mp[it]);
        }
       
       
        return ans;
    }
};