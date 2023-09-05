//********** APPROACH 1 **********
//Build 2 path arrays, path1 (it has path from root to the 1st node) & path2. Traverse form both & find out the last common value which is LCA

private:
bool findPath(TreeNode* root, int target, vector<TreeNode*>& path) {
    // Base case: If the root is NULL, return false.
    if (root == NULL)
        return false;

    // Add the current node to the path.
    path.push_back(root);

    // If the target value matches the current node's value, we found the path.
    if (root->val == target)
        return true;

    // If the target value is in the left or right subtree, return true.
    if (findPath(root->left, target, path) || findPath(root->right, target, path))
        return true;

    // If the target is not found in the subtree, remove the current node from the path.
    path.pop_back();

    return false;
}
public:
int LCA(TreeNode* root, int p, int q) {
    vector<TreeNode*> path1, path2;

    // Find paths from root to nodes p and q.
    if (!findPath(root, p, path1) || !findPath(root, q, path2))
        return NULL;

    // Find the last common node in the two paths.
    TreeNode* lca = NULL;
    for (int i = 0; i < path1.size()-1 && i < path2.size()-1; i++) {
        if (path1[i+1] != path2[i+1])
            return path1[i];
    }

    return NULL;
}



//********* APPROACH 2(Efficient) **********
/*
we do normal recursive traversal. We have following cases for every node
1. If it is same as p or q
2. If one of its subtree contains p & other contains q.
3. If one of its subtree contains contains both p & q.
4. If none of its subtree contains contains any of p & q.
*/


TreeNode* LCA(TreeNode* root, int p, int q){
  // Base case: If the root is NULL or we have found one of the target nodes, return the root.
  if(root == NULL || root->val == p || root->val == q)
    return root;

  // Recursively search for the LCA in the left and right subtrees.
  TreeNode* lca1 = LCA(root->left, p, q);
  TreeNode* lca2 = LCA(root->right, p, q);

  // If we found LCA candidates in both left and right subtrees, the current root is the LCA.
  if(lca1 != NULL && lca2 != NULL)
    return root;

  // If we found LCA candidate in either left or right subtree, return that candidate.
  if(lca1 != NULL)
    return lca1;
  else
    return lca2;
}
