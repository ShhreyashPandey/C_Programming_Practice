#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;

void print(struct node * head){
    if (head==NULL){
        printf("List is empty");
    }
    else{
        struct node *curr=(struct node *)malloc(sizeof(struct node));
        curr=head->next;
        printf("%d ->",head->data);
        while(curr!=head){
            printf("%d ->",curr->data);
            curr=curr->next;
        }
        printf("Circular");
    }
}

int create() {
    int n, value;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter data: ");
        scanf("%d", &value);

        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = value;

        if (head == NULL) {
            head = newnode;
            newnode->next = head;
        } else {
            struct node *temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->next = head;
        }
    }

    printf("Circular Linked List created\n");
    print(head);
    return n;
}

void insert(int n){
    if (head==NULL){
        printf("Create a list first");
    }
    else{
        int p;
        printf("Enter the position you want to add element : ");
        scanf("%d",&p);
        if (p>n+1){
            printf("Size of list is smaller. Invalid choice!");
        }
        else{
            struct node *curr=(struct node *)malloc(sizeof(struct node));
            curr=head;
            for (int j=1;j<p-1;j++){
                curr=curr->next;
            }
            struct node *newnode=(struct node *)malloc(sizeof(struct node));
            printf("Enter new data : ");
            scanf("%d",&newnode->data);
            newnode->next=curr->next;
            curr->next=newnode;
            printf("Insertion done\n");
            print(head);
        }
    }
}

void delete(int n){
    if (head==NULL){
        printf("Create a list first");
    }
    else{
        int p;
        printf("Enter the position you want to delete from : ");
        scanf("%d",&p);
        if (p>n){
            printf("Size of list is smaller. Invalid choice!");
        }
        else{
            struct node *curr=(struct node *)malloc(sizeof(struct node));
            struct node *temp=(struct node *)malloc(sizeof(struct node));
            curr=head;
            temp=NULL;
            
            if (p == 1) {
                while (curr->next != head) {
                    curr = curr->next;
                }
                temp = head;
                head = head->next;
                curr->next = head;
                free(temp);
            }
            else{
                for (int j=1;j<p-1;j++){
                    curr=curr->next;
                }
                temp=curr->next;
                curr->next=curr->next->next;
                free(temp);
            }
            
            printf("Deletion done\n");
            print(head);
        }
    }
}


void search(int n){
    if (head==NULL){
        printf("Create a list first");
    }
    else{
        int p;
        printf("Enter the position you want to search : ");
        scanf("%d",&p);
        if (p>n){
            printf("Size of list is smaller. Invalid choice!");
        }
        else{
            struct node *curr=(struct node *)malloc(sizeof(struct node));
            struct node *temp=(struct node *)malloc(sizeof(struct node));
            curr=head;
            for (int j=1;j<p;j++){
                curr=curr->next;
            }
            printf("Data is : %d",curr->data);
        }
    }
}


void reverse() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct node* prev = NULL;
    struct node* current = head;
    struct node* next;

    do {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    } while (current != head);

    (head)->next = prev;
    head = prev;
    
    struct node* temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf(" (Circular)\n");
}

int main(){
    int ch;
    int n;
    do{
        printf("\n1 : Create\n");
        printf("2 : Insert\n");
        printf("3 : Delete\n");
        printf("4 : Search\n");
        printf("5 : Reverse\n");
        printf("6 : Exit\n");
        
        printf("Enter a choice : ");
        scanf("%d",&ch);
        switch (ch) {
            case 1:
            n=create();
            break;
            case 2:
            insert(n);
            break;
            case 3:
            delete(n);
            break;
            case 4:
            search(n);
            break;
            case 5:
            reverse();
            break;
            case 6:
            exit(0);
            default:
            printf("Enter a valid choice!!\n");
            break;
        }
    }while(ch!=6);
    return 0;
}
