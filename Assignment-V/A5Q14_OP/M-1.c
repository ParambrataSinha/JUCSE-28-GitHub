#include <stdio.h>
#include <stdlib.h>

// Define the structure of a linked list node
struct Node
{
    int data;
    struct Node *next;
};

// Function to add a node at the end of the list
void append(struct Node **head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = *head;
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to reverse the linked list
void reverseList(struct Node **head)
{
    struct Node *prev = NULL;
    struct Node *current = *head;
    struct Node *next = NULL;

    while (current != NULL)
    {
        next = current->next; // Store next node
        current->next = prev; // Reverse the current node's pointer
        prev = current;       // Move pointers one step forward
        current = next;
    }

    *head = prev; // Update head to the new first node
}

// Function to print the linked list
void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node *head = NULL;

    // Add nodes to the linked list
    append(&head, 10);
    append(&head, 20);
    append(&head, 30);
    append(&head, 40);

    printf("Original list:\n");
    printList(head);

    // Reverse the linked list
    reverseList(&head);

    printf("Reversed list:\n");
    printList(head);

    return 0;
}
