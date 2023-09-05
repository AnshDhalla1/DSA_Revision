//RECURSIVE
class Solution {
     vector<int> ans;
private:
    void inorder(TreeNode* root){
        if(root==NULL) return;

        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
    }

public:
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return ans;
    }
};


//ITERATIVE
