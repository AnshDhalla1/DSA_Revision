//Binary Tree to DOubly Linked List

//We need to do the inorder traversal of the tree & while doing that, we can simply maintain a previous pointer of the previously traversed node. And node changes the right child of the previous node to current node & left child of current node as previous.

  Node* BTtoDLL(Node* root){
    Node* prev = NULL;
    if(root == NULL) return root;
    Node* head = BTtoDLL(root->left);
    if(prev == NULL) head = root;
    else{
      root->left = prev;
      prev->right = root;
    }
    prev = root;
  BTtoDLL(root->right);
  return head;
  }
