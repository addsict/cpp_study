class Stack {
  public:
    void push(int item);
    int pop();
    Stack();
    ~Stack();
  private:
    int *items;
    int top;
};
