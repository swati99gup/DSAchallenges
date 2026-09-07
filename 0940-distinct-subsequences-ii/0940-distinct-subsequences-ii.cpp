class Solution {
public:
int mod=1e9+7;
    int distinctSubseqII(string s) {
        int n=s.length();
     vector<int>dp(n+1,-1)   ;
     vector<int>last(26,0);
     dp[0]=1;
     for(int i=1;i<=n;i++){
        int c=s[i-1]-'a';
        dp[i]=(dp[i-1]*2)%mod;
        dp[i]=(dp[i]-last[c]+mod)%mod;
        last[c]=dp[i-1];
     }
     return (dp[n]-1+mod)%mod;
    }
};