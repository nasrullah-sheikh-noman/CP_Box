vector<int> adj_list[101];
bool vis[101];
int par[101];
bool cycle;

void bfs(int src) {
  queue<int> q;
  q.push(src);
  vis[src] = true;
  while(!q.empty()) {
    int p = q.front();
    q.pop();
    for(auto x: adj_list[p]) {
      if(vis[x] && par[p]!=x)
        cycle = true;
      if(!vis[x]) {
        q.push(x);
        vis[x] = true;
        par[x] = p;
      }
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
  memset(par, -1, sizeof(par));
  cycle = false;
  for (int i = 0; i < v; i++) {
    if(!vis[i])
      bfs(i);
  }
  if(cycle)
    cout << "Cycle Detected\n";
  else
    cout << "No Cycle\n";
}
