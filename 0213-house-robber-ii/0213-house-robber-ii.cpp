class Solution {
public:
int collectMoney(vector<int>&nums,int start,int end,vector<int>&dp){
    if(end<start)return 0;
    if(end==start)return nums[start];
    if(dp[end]!=-1)return dp[end];
    int pick=nums[end]+collectMoney(nums,start,end-2,dp);
    int notpick=collectMoney(nums,start,end-1,dp);
  return dp[end]=max(pick,notpick);
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        if(n==2)return max(nums[0],nums[1]);
        vector<int>dp1(n,-1);
                vector<int>dp2(n,-1);

        return max(collectMoney(nums,1,n-1,dp1),collectMoney(nums,0,n-2,dp2));
    }
};