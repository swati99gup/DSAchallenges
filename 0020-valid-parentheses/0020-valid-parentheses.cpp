class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto it:s){
            if(it=='('||it=='{'||it=='['){
                st.push(it);
            }
            else{
                if(st.empty())return false;

                if(st.top()=='('&&it==')'||st.top()=='{'&&it=='}'||st.top()=='['&&it==']'){
                    st.pop();
continue;
                } 
               else return false;
            }
        }
        
        return st.empty();
    }
};