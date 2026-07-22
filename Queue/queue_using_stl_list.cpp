class myQueue {
  public:
    list<int> l;

    void push(int val) {
      l.push_back(val);
    }
    void pop() {
      l.pop_front();
    }
    int size() {
      return l.size();
    }
    int front() {
      return l.front();
    }
    int back() {
      return l.back();
    }
    bool empty() {
      return l.empty();
    }
};
