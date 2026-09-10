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
  memset(par, -1, sizeof(par));
  fill(group_size, group_size+1001, 1);
  DSU_union(1, 2);
  DSU_union(2, 0);
  DSU_union(3, 1);
  for (int i = 0; i < 5; i++) {
    cout << i << " -> " << par[i] << nl;
  }
}
