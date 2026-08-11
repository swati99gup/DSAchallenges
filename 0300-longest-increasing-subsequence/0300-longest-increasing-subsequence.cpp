class Solution {
public:

  int binarysearch(vector<int>temp,int k){
    int low=0;
    int high=temp.size()-1;
while(low<high){
    int mid=low+(high-low)/2;
    if(temp[mid]>=k)high=mid;
    else {
        low=mid+1;
    }
  
}
  return low;
  }
    int lengthOfLIS(vector<int>& nums) {
       vector<int>temp;
       int n=nums.size();
       temp.push_back(nums[0]);
       for(int i=0;i<n;i++) {
        if(nums[i]>temp.back()){
            temp.push_back(nums[i]);
        }
        else{
            temp[binarysearch(temp,nums[i])]=nums[i];
        }
       }
       return temp.size();
    }
};