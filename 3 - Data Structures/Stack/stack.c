/* Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*Structure for nodes of the stack, contains the value that need to be saved and a pointer for the next node*/
struct stack_node {
    int value;
    struct stack_node * next;
};
typedef struct stack_node stack_node;

/*Structure for the stack, contains the size and a pointer for the top */
struct stack{
    int size;
    stack_node * top;
};
typedef struct stack stack;

stack * create_stack(){
    stack * s = (stack * ) malloc (sizeof(stack));
    s->size = 0;
    s->top = NULL;
    return s;
}

bool isEmpty(stack * s){
    return s->top == 0;
}

void push(stack * s, int val){
    stack_node * n = (stack_node * ) malloc (sizeof(stack_node));
    n->value = val;
    n->next = s->top;
    s->top = n;
    s->size++;
}

int pop(stack * s){
    int val;
    val = s->top->value;
    stack_node * sn = s->top;
    s->top = s->top->next;
    s->size--;
    free(sn);

    return val;
}

int main(){

    stack * stack_test  = create_stack();

    push(stack_test, 3);
    push(stack_test, 9);
    push(stack_test, 8);
    push(stack_test, 12);


    while (!isEmpty(stack_test)){
        printf("Val: %d\n", pop(stack_test));
    }
    return 0;
}
