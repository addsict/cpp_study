#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 1024

typedef struct {
    int *items;
    int top;
} Stack;

void init(Stack *s) {
    s->items = malloc(sizeof(int) * STACK_SIZE);
    s->top = 0;
}

void cleanup(Stack *s) {
    free(s->items);
}

void push(Stack *s, int item) {
    s->items[s->top++] = item;
}

int pop(Stack *s) {
    return s->items[--s->top];
}

int main() {
    Stack s;
    init(&s);

    push(&s, 1);
    push(&s, 2);
    push(&s, 3);

    printf("%d\n", pop(&s));
    printf("%d\n", pop(&s));
    printf("%d\n", pop(&s));

    return 0;
}
