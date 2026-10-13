void level_order(Node* root) {
  if(root==NULL) { 
    cout << "No tree";
    return;
  }
  queue<Node *> q;
  q.push(root);
  while(!q.empty()) {
    Node *p = q.front();
    q.pop();
    cout << p->val << " ";
    if(p->left) q.push(p->left);
    if(p->right) q.push(p->right);
  }
}
