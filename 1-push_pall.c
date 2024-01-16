#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100
int stack[STACK_SIZE];
int top = -1;

void push(int value) {
    if (top == STACK_SIZE - 1) {
        fprintf(stderr, "Error: Stack overflow\n");
        exit(EXIT_FAILURE);
    }
    stack[++top] = value;
}

void pall() {
    if (top == -1) {
        return;
    }

    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}

