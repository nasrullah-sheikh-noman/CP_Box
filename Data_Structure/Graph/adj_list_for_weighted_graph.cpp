int v, e;
  cin >> v >> e;
  vector<pair<int, int>> adj_list[v];
  while (e--)
  {
    int a, b, c;
    cin >> a >> b >> c;
    adj_list[a].emplace_back(b, c);
    adj_list[b].emplace_back(a, c);
  }
  for (int i = 0; i < v; i++)
  {
    cout << i << " -> ";
    for (auto p : adj_list[i])
    {
      cout << p.first << " " << p.second << ", ";
    }
    cout << endl;
  }
