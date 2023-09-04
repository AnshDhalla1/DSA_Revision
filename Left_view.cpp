vector<int> LeftView(Node* root){
  vector<int> ans;
  if(root == NULL) return ans;
  queue<Node*> q;
  q.push(root);
  while(!q.empty()){
    int s = q.size();
    for(int i=0; i<s; i++){
      Node* curr = q.top();
      q.pop();
      if(i == 0){
        ans.push(curr->val);
      }
      if(curr->left != NULL) q.push(curr->left);
      if(curr->right != NULL) q.push(curr->right);
    }
  }
  return ans;
}
