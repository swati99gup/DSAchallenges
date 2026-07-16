class Solution {
public:
int gcd(int a,int b){
    while(b!=0){
        int rem=a%b;
         a=b;
        b=rem;
    }
    return a;
}
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp(n);
        int mx=-1;
      for(int i=0;i<n;i++) {
        mx=max(mx,nums[i]);
       int prefixGCD=gcd(nums[i],mx);
        temp[i]=prefixGCD;

      } 
      sort(temp.begin(),temp.end());
      int i=0,j=n-1;
      long long sum=0;
      while(i<j){
        sum+=gcd(temp[i],temp[j]);
        i++;
        j--;
      }
      return sum;
    }
};