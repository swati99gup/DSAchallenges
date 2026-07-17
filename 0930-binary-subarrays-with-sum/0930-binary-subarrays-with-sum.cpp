class Solution {
public:
   int NoOfsubarray(vector<int>& nums,int goal){
    int n=nums.size();
  
    int i=0,j=0;
    int cnt=0;
   int sum=0;
    if(goal<0)return 0;
    while(i<n){
        sum+=nums[i];
        while(sum>goal){
            sum-=nums[j];
            j++;
           
        }
         cnt+=i-j+1;
        i++;
    }
    return cnt;
   }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
       return NoOfsubarray(nums,goal)-NoOfsubarray(nums,goal-1);
    }
};