#include <stdio.h>
#include <stdlib.h>

// Structure of a node
struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

// Function to insert a node at the beginning
void insertAtBeginning(int value)
{
    struct Node *newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }

    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// Function to display the linked list
void display()
{
    struct Node *temp = head;

    if (head == NULL)
    {
        printf("Linked List is Empty.\n");
        return;
    }

    printf("Linked List: ");

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

// Main function
int main()
{
    int n, value, i;

    printf("Enter the number of nodes to insert: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Enter data for node %d: ", i);
        scanf("%d", &value);

        insertAtBeginning(value);
    }

    printf("\nAfter insertion at the beginning:\n");
    display();

    return 0;
}