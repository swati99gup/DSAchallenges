class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.length();
        int l=0;
        int r=0;
        int sidx=-1;
        int minlen=INT_MAX;
        string ans;
        vector<int>hash(256,0);
        for(char c:t){
            hash[c]++;
        }
        int cnt=t.size();
        while(r<n){
            if(hash[s[r]]>0)cnt--;
            hash[s[r]]--;
            
            while(cnt==0){
                if(r-l+1<minlen){
                    minlen=r-l+1;
                    sidx=l;
                }
              hash[s[l]]++;
             if(hash[s[l]]>0)cnt++;
              l++;
            }
            r++;
        }
        return sidx==-1?"":s.substr(sidx,minlen);
    }
};