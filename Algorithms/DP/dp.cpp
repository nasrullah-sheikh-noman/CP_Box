int DpArray[1001] = {0};

int dp(int n) {
  if(n<2)
    return n;
  if(DpArray[n]!=0)
    return DpArray[n];
  return DpArray[n] = dp(n-1) + dp(n-2);
}

void solve() {
  int n;
  cin >> n;
  dp(n);
  cout << DpArray[n] << endl;
}
