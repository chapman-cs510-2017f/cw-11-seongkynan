#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

// function to creat a new stack
// new stack is Null, no data and no pointer to head
STACK new_stack() {
    STACK new = NULL;
    return new;
}

// add a stack to a stack
// first, create a memory space for the new stack
// check if malloc successfully created a memory space
// add a value to the new stack
// add the pointer to the current stack to the head of new stack
// Now, the new stack takes over the stack sitting on the top
void push_stack(STACK *s, SVALUE val) {
    STACK new = (STACK) malloc(sizeof(struct stack));
    if (new == NULL) {
        fprintf(stderr, "ERROR: Unable to push onto stack\n");
        return;
    }
    new->data = val;
    new->head = *s;
    *s = new;
}

// If the stack is empty, throw error
// Assign the current stack's data on the top to val variable, which will be returned at the end of the function
// Temporarily store the current stack to a temp variable which will be deleted
// Point the current stack's head to the pointer of the stack (moving to the top of the stack)
// the current top stack (stored in a temp variable) will be freed up
// return the data of the current stack
SVALUE pop_stack(STACK *s) {
    SVALUE val;
    STACK temp;
    if (*s == NULL) {
      fprintf(stderr, "ERROR: Attempt to pop value from empty stack\n");
      val = -9999; //SVALUE_ERR;
    }
    else {
      val = (*s)->data;
      temp = (*s);
      *s = (*s)->head;
      free(temp);
    }
    return val;
}

// Printer for svalue
void print_svalue(SVALUE val) {
    printf("%d\n", val);
};

// Printer for stack
void print_stack(STACK s) {
    while (s != NULL) {
        print_svalue(s->data);
        s = s->head;
    }
};
