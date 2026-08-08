class cmp{
  public:
    bool operator()(Student l, Student r) {
      return l.marks < r.marks;
    }
};
