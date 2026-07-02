class Solution {
public:
    int romanToInt(string s) {
       int n =s.length();
        unordered_map<char,int>mp={
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        int sum=mp[s[0]];
       for(int c=1;c<n;c++) {
        if(mp[s[c]]>mp[s[c-1]])sum+=mp[s[c]]-2*mp[s[c-1]];
         else sum+=mp[s[c]];
       }
       return sum;
    }
};