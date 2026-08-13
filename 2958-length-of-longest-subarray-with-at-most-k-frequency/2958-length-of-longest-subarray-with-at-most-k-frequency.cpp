class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0;
        int r=0;
        int maxi=-1;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
             mp[nums[r]]++;
            while(mp[nums[r]]>k){
                mp[nums[l]]--;
                l++;
                }               
                maxi=max(maxi,r-l+1);
                r++;
        }
        return maxi;
    }
};