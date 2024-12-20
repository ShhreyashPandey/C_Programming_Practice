#include <stdio.h>
#include <stdlib.h>
struct student{
    int roll_no;
    char name[50];
    int age;
    struct student *next;
};
int main(){
    struct student* n1 = (struct student*)malloc(sizeof(struct student));
    struct student* n2 = (struct student*)malloc(sizeof(struct student));
    struct student* n3 = (struct student*)malloc(sizeof(struct student));
    
    printf("Details of Student 1\n");
    printf("Enter roll numbers : ");
    scanf("%d",&n1->roll_no);
    printf("Enter name : ");
    scanf("%s",&n1->name);
    printf("Enter age : ");
    scanf("%d",&n1->age);
    n1->next=n2;
    
    printf("Details of Student 2\n");
    printf("Enter roll numbers : ");
    scanf("%d",&n2->roll_no);
    printf("Enter name : ");
    scanf("%s",&n2->name);
    printf("Enter age : ");
    scanf("%d",&n2->age);
    n2->next=n3;
    
    printf("Details of Student 3\n");
    printf("Enter roll numbers : ");
    scanf("%d",&n3->roll_no);
    printf("Enter name : ");
    scanf("%s",&n3->name);
    printf("Enter age : ");
    scanf("%d",&n3->age);
    n3->next=NULL;
    
    struct student *current=n1;
    while(current!=NULL){
        printf("\nRoll number : %d",current->roll_no);
        printf("\nName : %s",current->name);
        printf("\nAge : %d",current->age);
        current=current->next;
    }
    return 0;
}
