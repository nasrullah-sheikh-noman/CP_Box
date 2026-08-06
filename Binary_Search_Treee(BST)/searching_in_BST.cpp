bool search(Node* root, int val) {
  if(root==NULL)
    return false;
  if(root->val==val)
    return true;
  if(root->val<val)
    return search(root->right, val);
  else if (root->val > val)
    return search(root->left, val);
}
