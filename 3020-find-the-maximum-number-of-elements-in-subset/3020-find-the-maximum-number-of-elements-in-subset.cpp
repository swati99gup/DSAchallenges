class Solution {
public:
    int maximumLength(vector<int>& nums) {
        map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
            
        }
        int ans=1;
        if(mp.count(1)){
          if( mp[1]%2==0) ans=max(ans,mp[1]-1);
          else ans=max(ans,mp[1]);
        }
        for(auto [x,cnt]:mp){
            if(x==1)continue;
           long long curr=x;
            int len=0;
            while(mp[curr]>=2){
                len+=2;
                if(curr>1000000000LL/curr)break;
                if(!mp.count(curr*curr))break;
                curr=curr*curr;}
                if(mp[curr]==1)len+=1;
                else len--;
                ans=max(ans,len);
            
        }
        return ans;
    }
};