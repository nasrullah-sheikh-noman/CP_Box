class myStack {
  public:
    Node *head = NULL;
    Node *tail = NULL;
    int cnt = 0;

    void push(int x) {
      cnt++;
      Node *newNode = new Node(x);
      if(head==NULL) {
        head = newNode;
        tail = newNode;
        return;
      }
      tail->next = newNode;
      newNode->prev = tail;
      tail = newNode;
    }
    void pop() {
      cnt--;
      tail = tail->prev;
      if(tail==NULL) {
        head = NULL;
        return;
      }
      tail->next = NULL;
    }
    int top() {
      return tail->val;
    }
    int size() {
      return cnt;
    }
    bool empty() {
      return head == NULL;
    }
};
