int n, e;
int adj_mat[1001][1001];

void floyd_warshall() {
  for (int k = 0; k < n; k++) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if(adj_mat[i][k]!=INT_MAX && adj_mat[k][j]!=INT_MAX && adj_mat[i][j] > adj_mat[i][k]+adj_mat[k][j])
          adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
      }
    }
  }
}

void solve() {
  cin >> n >> e;

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(i==j)
        adj_mat[i][j] = 0;
      else
        adj_mat[i][j] = INT_MAX;
    }
  }

  while(e--) {
    int a, b, c;
    cin >> a >> b >> c;
    adj_mat[a][b] = c;
  }

  floyd_warshall();

  for (int i = 0;i < n;i++) {
    if(adj_mat[i][i]<0) {
      cout << "Negative weightd cycle detected\n";
      return;
    }
  }

  for(int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if(adj_mat[i][j]==INT_MAX)
        cout << "INF ";
      else
        cout << adj_mat[i][j] << " ";
    }
    cout << endl;
  }
}
