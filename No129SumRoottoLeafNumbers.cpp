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
    void Recur(TreeNode* root,int& Sum,int Temp){
          if(!root) return;
          int cnt=0;
          Temp=Temp*10+root->val; 
          if(root->left){
            Recur(root->left,Sum,Temp);
            cnt+=1;
          }
          if(root->right){
          Recur(root->right,Sum,Temp);
            cnt+=1;
          }      
          if(cnt==0){
              Sum+=Temp;
          }
    }
    int sumNumbers(TreeNode* root) {
        int Sum=0;
        Recur(root,Sum,0);
        return Sum;
    }
};
