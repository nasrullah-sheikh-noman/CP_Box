void margeSort(vector<int> &v, int left, int right) {
  if(left<right) {
    int mid = left + (right - left) / 2;
    margeSort(v, left, mid);
    margeSort(v, mid + 1, right);
    marge(v, left, mid, right);
  }
}
