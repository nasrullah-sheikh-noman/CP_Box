vector<int> adj_list[10001];
bool visited[10001];
int level[10001];
int parent[10001];

void BFS(int src) {
  queue<int> q;
  q.push(src);
  visited[src] = true;
  level[src] = 0;
  while(!q.empty()) {
    int par = q.front();
    q.pop();
    for(auto x: adj_list[par]) {
      if(!visited[x]) {
        q.push(x);
        visited[x] = true;
        level[x] = level[par] + 1;
        parent[x] = par;
      }
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
  memset(visited, false, sizeof(visited));
  memset(level, -1, sizeof(level));
  memset(parent, -1, sizeof(parent));
  int src, dst;
  cin >> src >> dst;
  BFS(src);
  cout << "shortest distance -> " << level[dst] << nl;
  vector<int> path;
  int node = dst;
  while(node!=-1) {
    path.push_back(node);
    node = parent[node];
  }
  reverse(path.begin(), path.end());
  for(auto x: path)
    cout << x << " ";
}
