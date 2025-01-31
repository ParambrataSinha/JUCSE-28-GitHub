#include <stdio.h>
#include <stdlib.h>

// Define the structure of a stack node
struct StackNode
{
    int data;
    struct StackNode *next;
};

// Function to push an element onto the stack
void push(struct StackNode **top, int data)
{
    struct StackNode *newNode = (struct StackNode *)malloc(sizeof(struct StackNode));
    newNode->data = data;
    newNode->next = *top;
    *top = newNode;
    printf("%d pushed onto stack\n", data);
}

// Function to pop an element from the stack
int pop(struct StackNode **top)
{
    if (*top == NULL)
    {
        printf("Stack underflow\n");
        return -1;
    }
    struct StackNode *temp = *top;
    int poppedData = temp->data;
    *top = temp->next;
    free(temp);
    return poppedData;
}

// Function to peek at the top element of the stack
int peek(struct StackNode *top)
{
    if (top == NULL)
    {
        printf("Stack is empty\n");
        return -1;
    }
    return top->data;
}

// Function to check if the stack is empty
int isEmpty(struct StackNode *top)
{
    return top == NULL;
}

// Main function to test the stack operations
int main()
{
    struct StackNode *stack = NULL;

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("Top element is %d\n", peek(stack));

    printf("%d popped from stack\n", pop(&stack));
    printf("Top element is now %d\n", peek(stack));

    printf("%d popped from stack\n", pop(&stack));
    printf("%d popped from stack\n", pop(&stack));

    if (isEmpty(stack))
    {
        printf("Stack is empty\n");
    }

    return 0;
}
