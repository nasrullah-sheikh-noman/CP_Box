vector<int> adj_list[10001];
bool visited[10001];

void BFS(int src) {
  queue<int> q;
  q.push(src);
  visited[src] = true;
  while(!q.empty()) {
    int par = q.front();
    q.pop();
    cout << par << " ";
    for(auto child: adj_list[par]) {
      if(!visited[child]) {
        q.push(child);
        visited[child] = true;
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
  BFS(0);
}
