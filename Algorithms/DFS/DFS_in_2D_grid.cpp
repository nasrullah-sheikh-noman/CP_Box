int n, m;
char grid[10001][10001];
bool vis[10001][10001];
vector<pair<int, int>> moves = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool valid(int ci, int cj) {
  if(ci<0 || ci>=n || cj<0 || cj>=m)
    return false;
  return true;
}

void DFS(int si, int sj) {
  cout << si << " " << sj << endl;
  vis[si][sj] = true;
  for(int i = 0; i < 4; i++) {
    int ci = si + moves[i].first;
    int cj = sj + moves[i].second;
    if(valid(ci, cj) && !vis[ci][cj]) {
      DFS(ci, cj);
    }
  }
}

void solve() {
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> grid[i][j];
    }
  }
  int si, sj;
  cin >> si >> sj;
  DFS(si, sj);
}
