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

void maxdepth(int &maxi,TreeNode* root,int h){
    maxi=max(maxi,h);
    if(root==nullptr)return;
    maxdepth(maxi,root->left,h+1);
    maxdepth(maxi,root->right,h+1);
}
    int maxDepth(TreeNode* root) {
       int maxi=0;
    maxdepth(maxi,root,0) ;  
    return maxi;
     }
};