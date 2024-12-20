#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void selectionsort(struct node **head) {
    struct node *current = *head;
    struct node *minNode;

    while (current != NULL) {
        minNode = current;
        struct node *temp = current->next;

        while (temp != NULL) {
            if (temp->data < minNode->data) {
                minNode = temp;
            }
            temp = temp->next;
        }

        int tempData = current->data;
        current->data = minNode->data;
        minNode->data = tempData;

        current = current->next;
    }
    
    printf("Linked list after sorting\n");
    struct node *curr = *head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");
}

int main() {
    struct node *head, *temp, *newnode;
    int data,n;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    
    printf("Enter data : ");
    scanf("%d",&data);
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    head=newnode;
    temp=head;
    
    for (int i=1;i<n;i++){
        printf("Enter data : ");
        scanf("%d",&data);
        newnode=(struct node *)malloc(sizeof(struct node));
        newnode->data=data;
        newnode->next=NULL;
        temp->next=newnode;
        temp=temp->next;
    }
    
    printf("Linked list before sorting\n");
    struct node* curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");

    selectionsort(&head);
    return 0;
}
