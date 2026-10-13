Node* input_value() {
  int val;
  cin >> val;
  Node *root;
  if(val==-1)
    root = NULL;
  else root = new Node(val);
  queue<Node *> q;
  if(root) q.push(root);
  while(!q.empty()) {
    // 1. To extract
    Node* p = q.front();
    q.pop();

    // 2. Working with nodes
    int l, r;
    cin >> l >> r;
    Node *myLeft, *myRight;
    if(l==-1)
      myLeft = NULL;
    else
      myLeft = new Node(l);
    if(r==-1)
      myRight = NULL;
    else
      myRight = new Node(r);
    p->left = myLeft;
    p->right = myRight;

    // 3. Pushing children
    if(p->left)
      q.push(p->left);
    if(p->right)
      q.push(p->right);
  }
  return root;
}
