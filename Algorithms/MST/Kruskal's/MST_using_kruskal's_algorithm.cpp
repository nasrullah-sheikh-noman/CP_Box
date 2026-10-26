class Edge {
  public:
    int a, b, c;
    Edge(int a, int b, int c) {
      this->a = a;
      this->b = b;
      this->c = c;
    }
};

bool cmp(Edge a, Edge b) {
  return a.c < b.c;
}

int par[1001];
int group_size[1001];

int find(int node) {
  if(par[node]==-1)
    return node;
  int leader = find(par[node]);
  par[node] = leader;
  return leader;
}

void DSU_union(int node1, int node2) {
  int leader1 = find(node1);
  int leader2 = find(node2);
  if(group_size[leader1]>=group_size[leader2]) {
    par[leader2] = leader1;
    group_size[leader1] += group_size[leader2];
  } else {
    par[leader1] = leader2;
    group_size[leader2] += group_size[leader1];
  }
}

void solve() {
  int n, i, j, k, e, x, p, q, m, l, r;
  memset(par, -1, sizeof(par));
  fill(group_size, group_size+1001, 1);
  cin >> n >> e;
  vector<Edge> edge_list;
  while(e--) {
    int a, b, c;
    cin >> a >> b >> c;
    edge_list.push_back(Edge(a, b, c));
  }
  sort(edge_list.begin(), edge_list.end(), cmp);
  int total_cost = 0;
  for(auto ed: edge_list) {
    int par1 = find(ed.a);
    int par2 = find(ed.b);
    if(par1 != par2) {
      DSU_union(ed.a, ed.b);
      total_cost += ed.c;
    }
  }
  cout << total_cost << endl;
}
