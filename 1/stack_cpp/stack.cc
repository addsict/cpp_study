#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#define STACK_SIZE 1024

Stack::Stack() {
  items = (int*)malloc(sizeof(int) * STACK_SIZE);
  top = 0;
}

Stack::~Stack() {
  free(items);
}

void Stack::push(int item) {
    items[top++] = item;
}

int Stack::pop() {
    return items[--top];
}
