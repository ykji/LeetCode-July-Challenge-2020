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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector <vector<int>> result;

        if(root==NULL)  return result;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector<int> curr;
        while(!q.empty()){
            TreeNode* temp=q.front();
		    q.pop();
		    curr.push_back(temp->val);
		    if(temp->left!=NULL){
			    q.push(temp->left);
		    }
		    if(temp->right!=NULL){
			    q.push(temp->right);
		    }
		    if(q.front()==NULL){
			    result.push_back(curr);
                curr.erase(curr.begin(),curr.end());
			    q.pop();
			    if(!q.empty()){
				    q.push(NULL);
		    	}
		    }

        }
        reverse(result.begin(),result.end());
        return result;
    }
};
