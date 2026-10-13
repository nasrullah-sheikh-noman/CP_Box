class cmp{
  public:
    bool operator()(Student l, Student r) {
      if(l.marks < r.marks)
        return true;
      else if(l.marks > r.marks)
        return false;
      else
        return l.roll > r.roll;
    }
};
