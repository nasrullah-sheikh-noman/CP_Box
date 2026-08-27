void solve() {
  int n, e;
  cin >> n >> e;
  vector<int> v[n];
  for(int i = 0; i < e; i++) {
    int a, b;
    cin >> a >> b;
    v[a].push_back(b);
    v[b].push_back(a);
  }
  for (int i = 0; i < n; i++) {
    for(auto &x : v[i]) {
      cout << x << ' ';
    }
    cout << endl;
  }
}
