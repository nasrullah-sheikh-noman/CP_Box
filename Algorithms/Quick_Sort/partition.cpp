int partition(vector<int> &v, int start, int end) {
  int idx = start - 1, pivot = v[end];
  for (int i = start; i < end; i++) {
    if(v[i] <= pivot) {
      idx++;
      swap(v[i], v[idx]);
    }
  }
  idx++;
  swap(v[idx], v[end]);
  return idx;
}
