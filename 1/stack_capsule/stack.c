#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#define STACK_SIZE 1024

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
