void delete_max_heap(vi &v) {
  if(v.empty())
    return;
  v[0] = v.back();
  v.pop_back();
  int cur_idx = 0;
  while(1) {
    int left_idx = cur_idx * 2 + 1;
    int right_idx = cur_idx * 2 + 2;
    int left_val = INT_MIN, right_val = INT_MIN;
    if(left_idx < v.size())
      left_val = v[left_idx];
    if(right_idx < v.size())
      right_val = v[right_idx];
    if(left_val >= right_val && left_val > v[cur_idx]) {
      swap(v[cur_idx], v[left_idx]);
      cur_idx = left_idx;
    } else if(right_val > left_val && right_val > v[cur_idx]) {
      swap(v[cur_idx], v[right_idx]);
      cur_idx = right_idx;
    } else break;
  }
}
