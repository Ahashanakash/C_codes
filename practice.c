#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
    char usn[100];
    char name[100];
    char branch[100];
    int sem;
    char phno[100];
    struct student *next;
} NODE;

void insert_head(NODE **head, char usn[], char name[], char branch[], int sem, char phno[])
{
    NODE *st = (NODE *)malloc(sizeof(NODE));
    if (st == NULL)
    {
        printf("Memory allocation failed.\n");
        return;
    }
    strcpy(st->usn, usn);
    strcpy(st->name, name);
    strcpy(st->branch, branch);
    st->sem = sem;
    strcpy(st->phno, phno);
    st->next = *head;
    *head = st;
}

void insert_tail(NODE **head, char usn[], char name[], char branch[], int sem, char phno[])
{
    NODE *st = (NODE *)malloc(sizeof(NODE));
    if (st == NULL)
    {
        printf("Memory allocation failed.\n");
        return;
    }
    strcpy(st->usn, usn);
    strcpy(st->name, name);
    strcpy(st->branch, branch);
    st->sem = sem;
    strcpy(st->phno, phno);
    st->next = NULL;

    if (*head == NULL)
    {
        *head = st;
    }
    else
    {
        NODE *temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = st;
    }
}

void delete_head(NODE **head)
{
    if (*head == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    NODE *temp = *head;
    *head = (*head)->next;
}

void delete_tail(NODE **head)
{
    if (*head == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    if ((*head)->next == NULL)
    {
        *head = NULL;
        return;
    }
    NODE *temp = *head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}

void print(NODE *head)
{
    printf("-----Student List-----\n");
    printf("USN\t\tNAME\t\tBranch\t\tSem\t\tPhone\n");
    NODE *temp = head;
    NODE *temp1 = head;
    while (temp != NULL)
    {
        printf("%s\t%s\t\t%s\t\t%d\t\t%s\n", temp->usn, temp->name, temp->branch, temp->sem, temp->phno);
        temp = temp->next;
    }
    int cnt = 0;
    while (temp1 != NULL)
    {
        cnt++;
        temp1 = temp1->next;
    }
    printf("\nThe no. of nodes in list is: %d", cnt);
}

int main()
{
    NODE *head = NULL;
    int choice = -1;
    char usn[100], name[100], branch[100], phno[100];
    int sem;

    while (choice != 6)
    {
        printf("\nMenu:\n");
        printf("1. Insert head\n");
        printf("2. Insert tail\n");
        printf("3. Delete head\n");
        printf("4. Delete tail\n");
        printf("5. print\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter usn: ");
            scanf("%s", usn);
            printf("Enter name: ");
            scanf("%s", name);
            printf("Enter branch: ");
            scanf("%s", branch);
            printf("Enter semester: ");
            scanf("%d", &sem);
            printf("Enter Phone Number: ");
            scanf("%s", phno);
            insert_head(&head, usn, name, branch, sem, phno);
        }
        else if (choice == 2)
        {
            printf("Enter usn: ");
            scanf("%s", usn);
            printf("Enter name: ");
            scanf("%s", name);
            printf("Enter branch: ");
            scanf("%s", branch);
            printf("Enter semester: ");
            scanf("%d", &sem);
            printf("Enter Phone Number: ");
            scanf("%s", phno);
            insert_tail(&head, usn, name, branch, sem, phno);
        }
        else if (choice == 3)
        {
            delete_head(&head);
        }
        else if (choice == 4)
        {
            delete_tail(&head);
        }
        else if (choice == 5)
        {
            print(head);
        }
        else if (choice == 6)
        {
            printf("Exit\n");
        }
        else
        {
            printf("Invalid choice. Try again.\n");
        }
    }

    // Free allocated memory
    NODE *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
