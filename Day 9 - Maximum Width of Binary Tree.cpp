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
    int left;
    int right;
public:
    int widthOfBinaryTree(TreeNode* root) {
        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
        if(root==NULL) return 1;
        queue<pair<TreeNode*,int>> q;
        q.push(make_pair(root,1));
        int ans=1;
        while(!q.empty()){
            int count=q.size();
            int leftEnd= q.front().second;
            int rightEnd= q.back().second;
            ans=max(ans,rightEnd-leftEnd+1);
            for(int i=0;i<count;++i){
                TreeNode* temp=q.front().first;
                int idx=q.front().second-leftEnd;
                q.pop();
                if(temp->left)  q.push(make_pair(temp->left,2*idx));
                if(temp->right)  q.push(make_pair(temp->right,2*idx+1));
            }
        }
        return ans;
    }
};
