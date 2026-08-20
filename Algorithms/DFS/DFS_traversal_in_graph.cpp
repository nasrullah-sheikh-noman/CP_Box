void BFS(int src) {
  cout << src << " ";
  vis[src] = true;
  for(auto child: adj_list[src]) {
    if(!vis[child]) {
      BFS(child);
    }
  }
}

void solve() {
  int n, e;
  cin >> n >> e;
  while(e--) {
    int a, b;
    cin >> a >> b;
    adj_list[a].push_back(b);
    adj_list[b].push_back(a);
  }
  memset(vis, false, sizeof(vis));
  int src;
  cin >> src;
  BFS(src);
}
