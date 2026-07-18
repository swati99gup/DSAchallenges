class Solution {
public:
    int numberOfSubstrings(string s) {
    int n=s.length() ;
    int l=0;
    int r=0;
    int cnt=0;
    unordered_map<char,int>mp;
    while(r<n){
    mp[s[r]]++;
    while(mp['a']>0&&mp['b']>0&&mp['c']>0)
    {
        cnt+=n-r;
        mp[s[l]]--;
        l++;
    }
    r++;
    }
    return cnt;   
    }
};