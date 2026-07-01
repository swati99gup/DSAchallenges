class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        if(n==1) return 1;
        int cnt=1;
        char curr_ch=chars[0];
        int index=0;
        for(int i=0;i<n-1;i++){
           if(chars[i]==chars[i+1]){
            cnt++;
           }
           else{
            chars[index]=curr_ch;
            index++;
            string num= to_string(cnt);
            if(cnt>1){
            int sz=num.size();
            for(auto it:num){
                chars[index]=it;
                index++;
            }
            }
            curr_ch=chars[i+1];
            cnt=1;
           }

        }
       chars[index++] = curr_ch;
        if (cnt > 1) {
            string num = to_string(cnt);
            for (char c : num)
                chars[index++] = c;
        }
        return index;
    }
};