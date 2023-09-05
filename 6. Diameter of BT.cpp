//APPROACH 1
//Idea is to find the following value for every node & return the max - max(1 + lh +rh)
// lh = left height    rh = right height
class Solution{
private:
  int height(Node* root){
    if(root == NULL) return 0;
    return 1 + max(height(root->left), height(root->right));
  }

public:
  int diameter(Node* root){
    if(root == NULL) return 0;
    int d1 = 1 + height(root->left) + height(root->right);
    int d2 = height(root->left);
    int d3 = height(root->right);

    return max(d1, max(d2, d3));
  }
};

//APPROACH 2
//Idea is to precompute heights of all the nodes in the binary tree and store them in an unordered map, then we can get the height in O(1) time.

//APPROACH 3
//Idea is to modify the height function

int height(Node* root){
  int res =0;
  if(root == NULL) return 0;
  int lh = height(root->left);
  int rh = height(root->right);

  res = max(res, 1+ lh+rh);
  return 1+max(lh, rh);
}
