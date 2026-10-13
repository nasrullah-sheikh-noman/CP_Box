Node* array_convert_to_BST(vi v, int l, int r) {
  if(l>r)
    return NULL;
  int mid = (l+r)/2;
  Node *root = new Node(v[mid]);
  Node* leftroot = array_convert_to_BST(v, l, mid - 1);
  Node* rightroot = array_convert_to_BST(v, mid + 1, r);
  root->left = leftroot;
  root->right = rightroot;
  return root;
}
