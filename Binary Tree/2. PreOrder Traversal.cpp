//RECURSIVE
class Solution {
    vector<int> ans;
private:
    void preorder(TreeNode* root){
        if(root==NULL) return;
        ans.push_back(root->val);
        preorder(root->left);
        preorder(root->right);
    }

public: 
    vector<int> preorderTraversal(TreeNode* root) {
        preorder(root);
        return ans;
    }
};


//ITERATIVE
void preorder(TreeNode* root){
    stack<TreeNode*> st;
    vector<int> ans;
    
    if(root == NULL) return;
    st.push(root);
    while(!st.empty()){
        TreeNode* curr = root;
        ans.push_back(curr->val);
        st.pop();
        if(curr->right != NULL) st.push(curr->right);
        if(curr->left != NULL) st.push(curr->left);
    }
}
