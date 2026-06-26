/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
       queue<pair<TreeNode*,int>>q;
       vector<int>ans;
       if(!root)return ans;
       q.push({root,0}) ;
       while(!q.empty()){
       
        int sz=q.size();
        for(int i=0;i<sz;i++){
auto it=q.front();
q.pop();
TreeNode* node=it.first;
int y=it.second;
if(i==sz-1)ans.push_back(node->val);
 if(node->left)q.push({node->left,y-1});
       if(node->right)q.push({node->right,y+1});
       }
       
   
       }
       return ans;
    }
};