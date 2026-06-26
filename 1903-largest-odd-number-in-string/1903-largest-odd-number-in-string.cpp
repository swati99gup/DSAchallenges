class Solution {
public:
    string largestOddNumber(string num) {
        int idx;
       for(int i=num.size()-1;i>=0;i--){
        int digit=num[i]-'0';
        if(digit%2==1){
            idx=i;
            break;
        }
       }

return num.substr(0,idx+1);
    }
};