class Solution {
public:
    string countAndSay(int n) {
            string result=""  ;
       if(n==1) return "1";
       string say=countAndSay(n-1);
       int cnt=1;
       for(int i=0;i<say.size()-1;i++){
        if(say[i]==say[i+1])cnt++;
        else{
            result+=to_string(cnt);
            result+=say[i];
            cnt=1;
        }
       }
       result+=to_string(cnt);
       result+=say.back();
       return result;
       }
};