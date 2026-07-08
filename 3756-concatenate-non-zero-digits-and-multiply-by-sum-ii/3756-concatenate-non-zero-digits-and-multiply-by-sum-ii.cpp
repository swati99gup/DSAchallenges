class Solution {
public:
int mod=1e9+7;
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int n=s.size();
        vector<long long>numbersum(n);
       vector<long long>numberuptoi(n);
       vector<int>nonzerouptoi(n);
       vector<long long> pow10(n + 1);
pow10[0] = 1;
for (int i = 1; i <= n; i++) pow10[i] = (pow10[i - 1] * 10) % mod;
  int sum=0;
        for(int i=0;i<n;i++){
            sum=(sum+s[i]-'0')%mod;
            numbersum[i]=sum;
            
        }
        long long num=0;
        for(int i=0;i<n;i++){
            if(s[i]!='0'){
            int x=s[i]-'0';
            num=(num*10+x)%mod;
            numberuptoi[i]=num;
            }
            else{
                if(i!=0)
                numberuptoi[i]=numberuptoi[i-1];
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]!='0')cnt++;
            
                nonzerouptoi[i]=cnt;
              
            
        }
        vector<int >ans;
for(auto it:queries){
    long long res;
    if(it[0]!=0){
       int k = nonzerouptoi[it[1]] - nonzerouptoi[it[0]-1];
       long long digitsum=(numbersum[it[1]]-numbersum[it[0]-1]+mod)%mod;
       long long x=(numberuptoi[it[1]]-numberuptoi[it[0]-1]*pow10[k]%mod +mod)%mod;
         res=(digitsum*x)%mod;}
    else{
        int k = nonzerouptoi[it[1]] ;
         res=(numbersum[it[1]]*numberuptoi[it[1]])%mod;}
    ans.push_back(res);
}
return ans;
    }
};