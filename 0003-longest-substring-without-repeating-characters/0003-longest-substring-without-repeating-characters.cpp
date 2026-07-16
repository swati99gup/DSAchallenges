class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int l=0;
       int maxlen=0;
        vector<int>hash(256,-1);
        for(int i=0;i<n;i++){
            if(hash[s[i]]!=-1&&hash[s[i]]>=l){
                l=hash[s[i]]+1;}
                                hash[s[i]]=i;

                maxlen=max(maxlen,i-l+1);
                
               
            
           
        }
        return maxlen;
    }
};