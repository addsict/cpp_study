typedef struct {
    int *items;
    int top;
} Stack;

void init(Stack *s);
void cleanup(Stack *s);
void push(Stack *s, int item);
int pop(Stack *s);
