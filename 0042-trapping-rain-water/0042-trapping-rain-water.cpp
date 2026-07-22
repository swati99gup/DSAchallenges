class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
       int lf=0;
       int rt= n-1;
       int maxlf=-1;
       int maxrt=-1;
       int totalwater=0;
       while(lf<rt){
        if(height[lf]<height[rt]){
            if(height[lf]>=maxlf){
            maxlf=max(maxlf,height[lf]);
            lf++;}
            else{
            totalwater+=(maxlf-height[lf]);
            lf++;
            }
        }
        else{
            if(height[rt]>=maxrt){
            maxrt=max(maxrt,height[rt]);
           rt--;}
            else{
            totalwater+=(maxrt-height[rt]);
            rt--;
            } 
        }
       }
       return totalwater;
    }
};