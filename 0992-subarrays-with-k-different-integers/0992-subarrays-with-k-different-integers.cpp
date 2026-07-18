class Solution {
    public:

  int findatmostDistinct(vector<int>& nums, int k,int n){
     unordered_map<int,int>temp;
        int r=0,l=0;
        int cnt=0;
        while(r<n){
         temp[nums[r]]++;
         while(temp.size()>k){
            temp[nums[l]]--;
            if(temp[nums[l]]==0)temp.erase(nums[l]);
            l++;
         }
         if(temp.size()<=k){
            cnt+=r-l+1;
         }
         r++;
        }
        return cnt;
  }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int n=nums.size();
        return findatmostDistinct(nums,k,n)-findatmostDistinct(nums,k-1,n);
       }
};