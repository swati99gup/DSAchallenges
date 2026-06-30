class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.length();
        unordered_map<char,int>mp;
        int sum=0;
        int left=0;
      for(int i=0;i<n;i++){
        mp[s[i]]++;
        while(mp['a']>0&&mp['b']>0&&mp['c']>0){
            sum+=n-i;
            mp[s[left]]--;
            left++;
        }
      }
      return sum;
    }
};