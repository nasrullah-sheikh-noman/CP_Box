int n, m;
char grid[10001][10001];
bool vis[10001][10001];
int level[10001][10001];
vector<pair<int, int>> moves = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool valid(int ci, int cj) {
  if(ci<0 || ci>= n || cj<0 || cj>=m)
    return false;
  return true;
}

void BFS(int si, int sj) {
  queue<pair<int, int>> q;
  q.push({si, sj});
  vis[si][sj] = true;
  level[si][sj] = 0;
  while(!q.empty()) {
    pair<int, int> par = q.front();
    int pi = par.first;
    int pj = par.second;
    q.pop();
    cout << pi << " " << pj << nl;
    for (int i = 0; i < 4; i++) {
      int ci = pi + moves[i].first;
      int cj = pj + moves[i].second;
      if(valid(ci, cj) && !vis[ci][cj]) {
        q.push({ci, cj});
        vis[ci][cj] = true;
        level[ci][cj] = level[pi][pj] + 1;
      }
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
  int si, sj, di, dj;
  cin >> si >> sj >> di >> dj;
  memset(vis, false, sizeof(vis));
  memset(level, -1, sizeof(level));
  BFS(si, sj);
  cout << level[di][dj] << nl;
}
