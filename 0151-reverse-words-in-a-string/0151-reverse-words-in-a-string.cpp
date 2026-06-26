class Solution {
public:
    string reverseWords(string s) {
        string ans;
        stack<string>st;
        while(!s.empty()&&s.front()==' '){
            s.erase(s.begin());
        }
        while(!s.empty()&&s.back()==' '){
            s.pop_back();
        }
         string store;
        for(char c:s){
           
            if(c == ' '){
    if(!store.empty()){
        st.push(store);
        store.clear();
    }
}
        else    store.push_back(c);
        }
        if (!store.empty())
            st.push(store);
        while(!st.empty()){
    ans += st.top();
    st.pop();

    if(!st.empty())
        ans += " ";
}
        return ans;
    }
};