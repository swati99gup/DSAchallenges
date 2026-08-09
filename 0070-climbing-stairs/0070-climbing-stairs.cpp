class Solution {
public:

 int climbing( vector<int>&dp,int n){
    if(n<=2)return n;
    
    if(dp[n]!=-1)return dp[n];
    return dp[n]=climbing(dp,n-1)+climbing(dp,n-2);
 }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return climbing(dp,n);
    }
};