//program to insert in a sorted 
#include<stdio.h>
#include<stdlib.h>
//link list node
struct Node {
    int data;
    struct Node*next;
};
/*function to insert a newnode in a list .Notr that this function expects a pointer to head_ref as this can modify the head of
input linked list(similar to push ())*/
void sortedInsert(struct Node**head_ref,struct Node* new_node)
{
    struct Node*current;
    /*special case for the head end*/
    if(*head_ref == NULL
        || (*head_ref)->data >= new_node->data) {
            new_node->next = *head_ref;
            *head_ref = new_node;
        }
        else {
            /*locate the node before the point of insertion*/
            current = *head_ref;
            while(current->next != NULL && current->next->data<new_node->data) {
                current = current->next;
            }
            new_node->next = current->next;
            current->next = new_node;
        }
                            
}
struct Node* newNode(int new_data)
{
     struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

      new_node->data = new_data;
      new_node->next = NULL;

      return new_node;
}
void printList(struct Node* head)
{
     struct Node* temp = head;
     while (temp != NULL){
        printf("%d",temp->data);
        temp= temp->next;
     }
}
int main()
{
    /*start with the empty list*/
    struct Node* head = NULL;
    struct Node* new_node = newNode(5);
    sortedInsert(&head,new_node);
    new_node = newNode(10);
    sortedInsert(&head,new_node);
    new_node = newNode(7);
    sortedInsert(&head,new_node);
    new_node = newNode(3);
    sortedInsert(&head, new_node);
    new_node = newNode(1);
    sortedInsert(&head,new_node);
    new_node = newNode(9);
    sortedInsert(&head,new_node);
    printf("\nCreated Linked List");
    printList(head);
    return 0;
}
 
