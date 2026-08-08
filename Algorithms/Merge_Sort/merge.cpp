void merge(vector<int> &v, int left, int mid, int right) {
  vector<int> tmp;
  int i = left, j = mid + 1;
  while(i<=mid && j <= right) {
    if(v[i]<=v[j]) {
      tmp.push_back(v[i]);
      i++;
    } else {
      tmp.push_back(v[j]);
      j++;
    }
  }
  while(i<=mid) {
    tmp.push_back(v[i]);
    i++;
  }
  while(j<=right) {
    tmp.push_back(v[j]);
    j++;
  }
  for (int idx = 0; idx < tmp.size(); idx++) {
    v[idx+left] = tmp[idx];
  }
}
