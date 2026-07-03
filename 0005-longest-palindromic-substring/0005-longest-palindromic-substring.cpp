class Solution {
public:
bool check(string& s,int i,int j){
    while(i<j){
        if(s[i]!=s[j])return false;
        i++;
        j--;
    }
    return true;
}
    string longestPalindrome(string s) {
        int n=s.length();
        int maxlen=1;
        int startindex=0;
       for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(check(s,i,j)){
              int len=j-i+1;
             if(len>maxlen){maxlen=len; 
             startindex=i; }
            }
        }
       }
       return s.substr(startindex,maxlen);
    }
};