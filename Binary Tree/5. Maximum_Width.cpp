//Applied BFS, and comparing width at each level to get the max width

int maxWidth(Node* root){
  if(root == NULL) return 0;
  queue<Node*> q;
  q.push(root);
  while(!q.empty()){
    int count = q.size();
    int res = max(res, count);
    for(int i=0; i<count; i++){
      Node* curr = q.top();
      q.pop();
      if(curr->left != NULL) q.push(curr->left);
      if(curr->right != NULL) q.push(curr->right);
    }
  }
  return res;
}
