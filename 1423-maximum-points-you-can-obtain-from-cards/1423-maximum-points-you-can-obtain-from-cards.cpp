class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int r=0;
        int l=0;
        int sum=0;
        for(int i=0;i<k;i++){
                     sum+=cardPoints[i];

        }
    int maxsum=sum;
    while(k>0){
        sum-=cardPoints[k-1];
        sum+=cardPoints[n-1];
        maxsum=max(maxsum,sum);
        k--;
        n--;
    }
    return maxsum;
    }
};