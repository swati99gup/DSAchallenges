class Solution {
public:
    int findGCD(vector<int>& nums) {
        int a=nums[0];
        int b=nums[0];
        for(int i=0;i<nums.size();i++){
            a=max(a,nums[i]);
            b=min(b,nums[i]);
        }
        while(b!=0){
int rem=a%b;
a=b;
b=rem;
        }
        return a;
    }
};