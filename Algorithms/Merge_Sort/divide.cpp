void mergeSort(vector<int> &v, int left, int right) {
  if(left<right) {
    int mid = left + (right - left) / 2;
    mergeSort(v, left, mid);
    mergeSort(v, mid + 1, right);
    merge(v, left, mid, right);
  }
}
