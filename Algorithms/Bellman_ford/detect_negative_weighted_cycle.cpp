class Edges {
  public:
    int a, b, c;
    Edges(int a, int b, int c) {
      this->a = a;
      this->b = b;
      this->c = c;
    }
};

int n, e;
vector<Edges> edge_list;
int dis[1001];

void bellman_ford() {
  for (int i = 0; i < n-1; i++) {
    for(auto edge: edge_list) {
      int a = edge.a;
      int b = edge.b;
      int c = edge.c;
      if(dis[a] != INT_MAX && dis[a]+c < dis[b]) {
        dis[b] = dis[a] + c;
      }
    }
  }
  bool cycle = false;
  for(auto edge: edge_list) {
    int a = edge.a;
    int b = edge.b;
    int c = edge.c;
    if(dis[a] != INT_MAX & dis[a]+c<dis[b])
      cycle = true;
  }
  if(cycle) {
    cout << "Negative weighted cycle detected\n";
  } else {
    for(int i = 0; i < n; i++) {
      cout << i << " -> " << dis[i] << endl;
    }
  }
}

void solve() {
  cin >> n >> e;
  while(e--) {
    int a, b, c;
    cin >> a >> b >> c;
    edge_list.push_back(Edges(a, b, c));
  }
  for(int i = 0; i < n; i++) {
    dis[i] = INT_MAX;
  }
  dis[0] = 0;
  bellman_ford();
}
