void solve() {
  int n, e;
  cin >> n >> e;
  vector<int> v[n];
  for(int i = 0; i<e; i++) {
    int a, b;
    cin >> a >> b;
    v[a].push_back(b);
  }
  for (int i = 0; i < n; i++) {
    if(v[i].size()>0) {
      for(auto &x : v[i]) {
        cout << x << ' ';
      }
      cout << endl;
    } 
  }
}
