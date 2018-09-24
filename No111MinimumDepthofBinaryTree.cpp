/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
        queue<TreeNode*>Q;
        queue<int> T;
        Q.push(root);
        T.push(1);
        while(!Q.empty()){
            TreeNode* Top=Q.front();
            int Depth=T.front();
            if(Top->left==NULL&&Top->right==NULL){
                return Depth;
            }
            if(Top->left){
                Q.push(Top->left);
                T.push(Depth+1);
            }
            if(Top->right){
                Q.push(Top->right);
                T.push(Depth+1);
            }
            Q.pop();
            T.pop();
        }
        return 0;
    }
};
