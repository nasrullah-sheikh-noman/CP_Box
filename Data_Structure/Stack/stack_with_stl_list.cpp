class myStack {
  public:
    list<int> l;
    void push(int x) {
      l.push_back(x);
    }
    void pop() {
      l.pop_back();
    }
    int top() {
      return l.back();
    }
    int size() {
      return l.size();
    }
    bool empty() {
      return l.empty();
    }
};
