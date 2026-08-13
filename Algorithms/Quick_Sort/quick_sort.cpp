void quickSort(vector<int> &v, int start, int end) {
  if(start < end) {
    int pivot = partition(v, start, end);
    quickSort(v, start, pivot-1);
    quickSort(v, pivot+1, end);
  }
}
