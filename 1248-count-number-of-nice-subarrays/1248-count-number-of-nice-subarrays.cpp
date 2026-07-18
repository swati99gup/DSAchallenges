class Solution {
public:
 int niceSubarrays(vector<int>& nums,int k){
    int n=nums.size();
    int cnt=0;
    int l=0;
    int r=0;
    while(r<n){
        if(nums[r]%2!=0){
            k--;
        }
        while(k<0){
            if(nums[l]%2!=0)k++;
            l++;
        }
        cnt+=r-l+1;
        r++;
        
    }
    return cnt;
 }
    int numberOfSubarrays(vector<int>& nums, int k) {
      return niceSubarrays(nums,k)-niceSubarrays(nums,k-1);
    }
};