void inOrder(Node* root) {
  if(root==NULL)
    return;
  inOrder(root->left);
  cout << root->val << " ";
  inOrder(root->right);
}
