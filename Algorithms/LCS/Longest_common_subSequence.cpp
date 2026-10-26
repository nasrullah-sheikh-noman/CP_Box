string a, b;
int dp[1001][1001];

int LCS(int i, int j) {
  if(i<0 || j <0) {
    return 0;
  }
  if(dp[i][j]!=-1)
    return dp[i][j];
  if(a[i]==b[j]) {
    return dp[i][j] = LCS(i - 1, j - 1) + 1;
  } else {
    int op1 = LCS(i - 1, j);
    int op2 = LCS(i, j - 1);
    return dp[i][j] = max(op1, op2);
  }
}

void solve() {
  int n, i, j, k, x, p, q, m, l, r;
  cin >> a >> b;
  n = a.size();
  m = b.size();
  memset(dp, -1, sizeof(dp));
  cout << LCS(n-1, m-1);
}
