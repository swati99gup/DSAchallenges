class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>ans;
        if(matrix.empty()) return {};
        int left=0,right=m-1,top=0,bottom=n-1;
        while(left<=right&&top<=bottom){
            for(int row=left;row<=right;row++){
                ans.push_back(matrix[top][row]);
            }
            top++;
            if(top<=bottom){
            for(int col=top;col<=bottom;col++){
                ans.push_back(matrix[col][right]);
            }
            right--;
            }
            if(top<=bottom){
                for(int row=right;row>=left;row--){
                ans.push_back(matrix[bottom][row]);
            }
            bottom--;
            }
            if(right>=left){
                for(int col=bottom;col>=top;col--){
                ans.push_back(matrix[col][left]);
            }
            left++;
            }
        }
        return ans;

    }
};