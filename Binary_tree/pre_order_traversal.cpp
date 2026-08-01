void preOrder(Node* root) {
  if(root==NULL)
    return;
  cout << root->val << " ";
  preOrder(root->left);
  preOrder(root->right);
}
