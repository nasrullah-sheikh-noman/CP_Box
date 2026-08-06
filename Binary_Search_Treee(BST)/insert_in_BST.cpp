void insert_in_BST(Node* &root, int val) {
  if(root==NULL) {
    root = new Node(val);
  }
  if(root->val>val) {
    if(root->left==NULL)
      root->left = new Node(val);
    else
      insert_in_BST(root->left, val);
  }
  else {
    if(root->right==NULL)
      root->right = new Node(val);
    else
      insert_in_BST(root->right, val);
  }
}
