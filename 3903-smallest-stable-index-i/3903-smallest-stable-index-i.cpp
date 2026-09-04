class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int maxi=0;
      
        int maxx=INT_MAX;
        for(int i=0;i<n;i++){
            if(maxi<nums[i]){
                maxi=nums[i];
            }
           int  mini=INT_MAX;
            for(int j=i;j<n;j++){
                if(mini>nums[j]){
                    mini=nums[j];
                }
            }
            int res=maxi-mini;
            if(res<=k){
             return i;
            }
        }
        return -1;
    }
};