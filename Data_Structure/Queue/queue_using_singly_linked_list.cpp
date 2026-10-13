class myQueue {
  public:
    Node *head = NULL;
    Node *tail = NULL;
    int cnt = 0;

    void push(int val) {
      cnt++;
      Node *newNode = new Node(val);
      if(head==NULL) {
        head = newNode;
        tail = newNode;
        return;
      }
      tail->next = newNode;
      tail = newNode;
    }
    void pop() {
      cnt--;
      head = head->next;
      if(head==NULL) {
        tail = NULL;
      }
    }
    int front() {
      return head->val;
    }
    int size() {
      return cnt;
    }
    int back() {
      return tail->val;
    }
    bool empty() {
      return head == NULL;
    }
};
