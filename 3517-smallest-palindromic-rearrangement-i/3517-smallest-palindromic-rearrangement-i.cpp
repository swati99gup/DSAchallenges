class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int>freq(26,0);
        string left;
        string mid;
        for(auto it:s){
            freq[it-'a']++;
        }
        for(char c='a';c<='z';c++){
          int x=  freq[c-'a']/2;
         
          while(x!=0){
          left+=c;
          x--;
        }
       if(freq[c-'a']%2){
        mid+=c;
       }
    }
    if(mid.length()>1)return "";
    string right=left;
    reverse(right.begin(),right.end());
    return left+mid+right;
    }
};