class Solution {
public:
void heaplify(vector<int>& nums, int n,int i){
    
    int largest=i;
    int lf=2*i+1;
    int rt=2*i+2;
    if(lf<n&&nums[lf]>nums[largest]){
        largest=lf;
    }
     if(rt<n&&nums[rt]>nums[largest]){
        largest=rt;
    }
    if(largest!=i){
        swap(nums[largest],nums[i]);
        heaplify(nums,n,largest);
    }
}
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
      for(int i=n/2-1;i>=0;i--)  {
        heaplify(nums,n,i);
      }
      for(int i=n-1;i>=n-k+1;i--){
        swap(nums[0],nums[i]);
        heaplify(nums,i,0);
      }
      return nums[0];
    }
};