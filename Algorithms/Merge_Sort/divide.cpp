void divide(vector<int> &v, int left, int right) {
  if(left<right) {
    int mid = left + (right - left) / 2;
    divide(v, left, mid);
    divide(v, mid + 1, right);
    merge(v, left, mid, right);
  }
}
