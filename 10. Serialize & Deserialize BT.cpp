//SERIALIZE
//Given root of BT, and our task is to convert this tree into String or Array such that we can construct the tree back.

void serialize(TreeNode* root){
  vector<int> ans;
  if(root == NULL){
    ans.push_back(-1);
    return;
  }
  arr.push_back(root->val);
  serialize(root->left);
  serialize(root->right);
}


//DE-SERIALIZE
//Reverse process is called deserialization

TreeNode* deSerialize(vector<int> ans){
  int index = 1;
  
  if(index == ans.size()) return NULL;
  int val = ans[index];
  index++;
  
  TreeNode* root = new Node(val);
  root->left = deSerialize(ans);
  root->right = deSerialize(ans);
  return root;
}
