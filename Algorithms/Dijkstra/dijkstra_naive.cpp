vector<pair<int, int>> adj_list[101];
int dis[101];

void dijkstra(int src) {
  queue<pair<int, int>> q;
  q.push({src, 0});
  dis[src] = 0;
  while(!q.empty()) {
    pair<int, int> par = q.front();
    int par_node = par.first;
    int par_dis = par.second;
    q.pop();
    for(auto child: adj_list[par_node]) {
      int child_node = child.first;
      int child_dis = child.second;
      if(child_dis+par_dis<dis[child_node]) {
        dis[child_node] = child_dis + par_dis;
        q.push({child_node, dis[child_node]});
      }
    }
  }
}

void solve() {
  int e, v;
  cin >> e >> v;
  while(v--) {
    int a, b, c;
    cin >> a >> b >> c;
    adj_list[a].emplace_back(b, c);
    adj_list[b].emplace_back(a, c);
  }
  for(int i = 0; i < e; i++)
    dis[i] = INT_MAX;
  dijkstra(0);
  for (int i = 0; i < e; i++)
    cout << i << " -> " << dis[i] << endl;
}
