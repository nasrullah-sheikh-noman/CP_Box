void insert_at_min_heap(vector<int> &v) {
  int cur_idx = v.size()-1;
  while(cur_idx!=0) {
    int par_idx = (cur_idx-1)/2;
    if(v[par_idx] > v[cur_idx]) {
      swap(v[par_idx], v[cur_idx]);
      cur_idx = par_idx;
    } else
      break;
  }
}
