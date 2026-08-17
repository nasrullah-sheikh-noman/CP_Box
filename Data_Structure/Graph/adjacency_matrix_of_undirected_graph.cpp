void solve() {
  int n, e; cin >> n >> e;
  int v[n][n];
  memset(v, 0, sizeof(v));
  for(int i = 0; i < n; i++) {
    v[i][i] = 1;
  }
  for(int i = 0; i < e; i++) {
    int a, b;
    cin >> a >> b;
    v[a][b] = 1;
    v[b][a] = 1;
  }
  for (int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cout << v[i][j] << " ";
    }
    cout << endl;
  }
}
