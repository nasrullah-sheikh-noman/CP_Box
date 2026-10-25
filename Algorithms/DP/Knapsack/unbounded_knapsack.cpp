int n, max_weight;
int val[1001];
int weight[1001];
int dp[1001][1001];

int Unbounded_knapsack(int i , int max_weight) {
  if(i < 0 || max_weight <= 0)
    return 0;
  if(dp[i][max_weight] != -1) {
    return dp[i][max_weight];
  }
  if(weight[i] <= max_weight) {
    int op1 = Unbounded_knapsack(i, max_weight - weight[i]) + val[i];
    int op2 = Unbounded_knapsack(i - 1, max_weight);
    return dp[i][max_weight] = max(op1, op2);
  } else {
    return dp[i][max_weight] = Unbounded_knapsack(i - 1, max_weight);
  }
}

void solve() {
  int i, j, k, x, p, q, m, l, r;
  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> val[i];
  }
  for (i = 0; i < n; i++) {
    cin >> weight[i];
  }
  cin >> max_weight;
  for (i = 0; i < n; i++) {
    for (j = 0; j <= max_weight; j++) {
      dp[i][j] = -1;
    }
  }
  cout << Unbounded_knapsack(n - 1, max_weight);
}
