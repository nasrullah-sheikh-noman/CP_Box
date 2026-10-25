void conquer(vector<int> &v, int l, int mid, int r) {
  int i = l, j = mid + 1;
  vector<int> tmp;
  while(i <= mid && j <= r) {
    if(v[i]<=v[j]) {
      tmp.push_back(v[i++]);
    } else {
      tmp.push_back(v[j++]);
    }
  }
  while(i<=mid) {
    tmp.push_back(v[i++]);
  }
  while(j<=r) {
    tmp.push_back(v[j++]);
  }
  int n = tmp.size();
  for (int k = 0; k < n; k++) {
    v[l+k] = tmp[k];
  }
}

void divide(vector<int> &v, int l, int r) {
  if(l<r) {
    int mid = l + (r - l) / 2;
    divide(v, l, mid);
    divide(v, mid + 1, r);
    conquer(v, l, mid, r);
  } 
}

void solve() {
  int n, i, j, k, x, p, q, m, l, r;
  cin >> n;
  vector<int> v(n);
  for (i = 0; i < n; i++) {
    cin >> v[i];
  }
  divide(v, 0, n - 1);
  for (i = 0; i < n; i++) {
    cout << v[i] << " ";
  }
}
