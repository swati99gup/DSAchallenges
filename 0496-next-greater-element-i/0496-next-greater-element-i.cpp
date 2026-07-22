class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        stack<int>st;
        vector<int>nge(n);
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<n;i++){
            mp[nums2[i]]=i;
        }
      for(int i=n-1;i>=0;i--) {
         while(!st.empty()&&nums2[i]>=st.top()){
                    st.pop();
                }
        if(st.empty()){
           nge[i]=-1;
            st.push(nums2[i]);
            
        }
        else{
                nge[i]=st.top();
                st.push(nums2[i]);
            }
           
        }
       
      for(int i=0;i<nums1.size();i++){
        ans.push_back(nge[mp[nums1[i]]]);
      }
      return ans;
    }
};