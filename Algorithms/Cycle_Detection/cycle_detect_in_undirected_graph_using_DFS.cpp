vector<int> adj_list[101];
bool vis[101];
int par[101];
bool cycle = false;

void dfs(int src) {
  vis[src] = true;
  for(auto x: adj_list[src]) {
    if(vis[x] && par[src]!=x)
      cycle = true;
    if(!vis[x]) {
      par[x] = src;
      dfs(x);
    }
  }
}

void solve() {
  int v, e;
  cin >> v >> e;
  while(e--) {
    int a, b;
    cin >> a >> b;
    adj_list[a].push_back(b);
    adj_list[b].push_back(a);
  }
  memset(vis, false, sizeof(vis));
  memset(par, -1, sizeof(par));
  cycle = false;
  for (int i = 0; i < v; i++) {
    if(!vis[i]) {
      dfs(i);
    }
  }
  if(cycle)
    cout << "Cycle Detected\n";
  else
    cout << "No Cycle\n";
}
