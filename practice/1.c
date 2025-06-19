#include <stdio.h>
#include <stdlib.h>

// Define the structure for a linked list node
struct Node
{
  int data;
  struct Node *next;
};

// Function to create a new node
struct Node *createNode(int data)
{
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = NULL;
  return newNode;
}

// Function to insert a node at the end of the linked list
void insertAtEnd(struct Node **head, int data)
{
  struct Node *newNode = createNode(data);
  if (*head == NULL)
  {
    *head = newNode;
    return;
  }

  struct Node *current = *head;

  while (current->next != NULL)
  {
    current = current->next;
  }
  current->next = newNode;
}

void insertAtStart(struct Node **head, int data)
{
  struct Node *newNode = createNode(data);
  if (*head == NULL)
  {
    *head = newNode;
    return;
  }
  newNode->next = *head;
  *head = newNode;
}

void insertAtPos(struct Node **head, int data,int pos)
{
  struct Node *newNode = createNode(data);
  if (*head == NULL)
  {
    *head = newNode;
    return;
  }

  struct Node *current = *head;
  for(int i=1;i<=pos-1;i++){
    current=current->next;
    if(current==NULL){
      printf("Invalid Index");
    }
  }

}
// Function to print the linked list
void printList(struct Node *head)
{
  struct Node *current = head;
  while (current != NULL)
  {
    printf("%d -> ", current->data);
    current = current->next;
  }
  printf("NULL\n");
}

// Function to free the linked list
void freeList(struct Node *head)
{
  struct Node *current = head;
  struct Node *nextNode;
  while (current != NULL)
  {
    nextNode = current->next;
    free(current);
    current = nextNode;
  }
}

int main()
{
  struct Node *head = NULL; // Initialize the head of the list as NULL

  // Insert nodes at the end
  insertAtEnd(&head, 10);
  insertAtEnd(&head, 20);
  insertAtEnd(&head, 30);
  insertAtStart(&head,40);
  // Print the linked list
  printList(head);

  // Free the linked list
  freeList(head);

  return 0;
}
