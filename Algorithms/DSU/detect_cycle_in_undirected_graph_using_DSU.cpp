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
    group_size[leader1] += group_size[leader2];
    par[leader2] = leader1;
  } else {
    group_size[leader2] += group_size[leader1];
    par[leader1] = leader2;
  }
}

void solve() {
  memset(par, -1, sizeof(par));
  fill(group_size, group_size + 1001, 1);
  int n, e;
  cin >> n >> e;
  bool cycle = false;
  while(e--) {
    int a, b;
    cin >> a >> b;
    int leader1 = find(a);
    int leader2 = find(b);
    if(leader1==leader2)
      cycle = true;
    else {
      DSU_union(a, b);
    }
  }
  if(cycle)
    cout << "Cycle detected\n";
  else
    cout << "No cycle\n";
}
