#include <stdio.h>
#include <stdlib.h>

// Structure of Node
struct Node
{
    int data;
    struct Node *next;
};

// Function to delete last node
struct Node* deleteEnd(struct Node *head)
{
    // Case 1: List is empty
    if(head == NULL)
    {
        printf("Linked List is Empty.\n");
        return head;
    }

    // Case 2: Only one node
    if(head->next == NULL)
    {
        free(head);
        return NULL;
    }

    // Case 3: More than one node
    struct Node *temp = head;

    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;

    return head;
}

// Function to display linked list
void display(struct Node *head)
{
    struct Node *temp = head;

    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main()
{
    // Creating sample linked list
    struct Node *head = (struct Node*)malloc(sizeof(struct Node));
    struct Node *second = (struct Node*)malloc(sizeof(struct Node));
    struct Node *third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    printf("Before Deletion:\n");
    display(head);

    head = deleteEnd(head);

    printf("After Deletion:\n");
    display(head);

    return 0;
}