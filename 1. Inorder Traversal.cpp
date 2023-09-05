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
void inorder(TreeNode* root){
     if(root == NULL) return;

     stack<TreeNode*> st;
     TreeNode* curr = root;;

     while(curr != NULL  || !st.empty()){
          while(curr != NULL){
               st.push(curr);
               curr = curr->left;
          }
          curr = st.top();
          s.pop();
          ans.push_back(curr->val);
          curr = curr->right;
     }
}
