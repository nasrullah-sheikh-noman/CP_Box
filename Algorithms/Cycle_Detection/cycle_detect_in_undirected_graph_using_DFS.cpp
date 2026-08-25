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
  int e, v;
  cin >> e >> v;
  while(v--) {
    int a, b;
    cin >> a >> b;
    adj_list[a].push_back(b);
    adj_list[b].push_back(a);
  }
  for (int i = 0; i < e; i++) {
    if(!vis[i]) {
      dfs(i);
    }
  }
  if(cycle)
    cout << "Cycle Detected\n";
  else
    cout << "No Cycle\n";
}
