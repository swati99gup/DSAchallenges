class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n=nums1.size();
        int mini=INT_MAX;
        bool iseven=true;
        bool isodd=true;
        for(int i=0;i<n;i++){
           if(nums1[i]<mini ){
            mini=nums1[i];
           }
        }
        
        for(int i=0;i<n;i++){
            if(nums1[i]%2!=0){
                iseven=false;
            }
        }
         for(int i=0;i<n;i++){
            if(nums1[i]%2==0){
                isodd=false;
            }
        }
        if(iseven==true||isodd==true)return true;
        if(mini%2==1||mini==1)return true;
        return false;
    }
};