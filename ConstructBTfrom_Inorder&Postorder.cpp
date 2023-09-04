// We construct tree in Preorder fashion. We maintain preIndex variable & construct the node by just incrementing preIndex by 1;
// - is: The start index of the current subtree in the inorder traversal.
// - ie: The end index of the current subtree in the inorder traversal.


Node* ConsTree(vector<int> in, vector<int> pre, int is, int ie){
  int preIndex = 0;
  //if current subtree is empty
  if(is > ie) return NULL;
  
  // Create a new Node with value of preorder at current preIndex & then incrementing preIndex by 1
  Node* root = new Node(pre[preIndex++]);

  int inIndex;
  //Searching for index of root value in Inorder traversal to determine the positions of the left and right subtrees.
  for(int i= is ; i<ie; i++){
    if(in[i] == root->val){
      inIndex = i;
      break;
    }
  }

  //After finding the placement of right & left subtree , We construct left & right subtree
  root->left = ConsTree(in, pre, is, inIndex-1);            //for left , end index = 1 end prev to the index of root
  root->right = ConsTree(in, pre, inIndex+1, ie);

  return root;
}
