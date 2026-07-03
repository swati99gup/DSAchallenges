class Solution {
public:
    int myAtoi(string s) {
        int i=0;
       while(i<s.size()&&s[i]==' '){
        i++;
       }
       int sign=1;
        if(i<s.size()&&(s[i]=='+'||s[i]=='-')){
            if(s[i]=='-')
            sign=-1;
            i++;

        }
        while(i<s.size()&&s[i]=='0'){
            i++;
        }
       long long res=0;
        for(int k=i;k<s.size();k++){
            if(!(s[k] >= '0' && s[k] <= '9'))break;
            int digit=s[k]-'0';
            if (res > (INT_MAX - digit) / 10) {
        return (sign == 1) ? INT_MAX : INT_MIN;
    }
            res=res*10+(digit);
        }
        
        return res*sign;
    }
};