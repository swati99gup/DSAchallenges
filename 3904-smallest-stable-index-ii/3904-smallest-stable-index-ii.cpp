class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>suffmin(n);
        suffmin[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suffmin[i]=min(nums[i],suffmin[i+1]);
        }
        int maxi=nums[0];
for(int i=0;i<n;i++){
    maxi=max(maxi,nums[i]);

    int res=maxi-suffmin[i];
    if(res<=k)return i;
}
return -1;
    }
};