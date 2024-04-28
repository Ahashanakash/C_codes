#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int q[MAX];
int front = -1, rear = -1, count = 0;

void insert(char item)
{
    if (count == MAX)
    {
        printf("Queue Overflow\n");
        return;
    }
    if (front == -1)
    {
        front = 0;
    }
    rear = (rear + 1) % MAX;
    q[rear] = item;
    count++;
}

int del()
{
    int item;
    if (count == 0)
    {
        printf("Queue Underflow\n");
        exit(1);
    }
    item = q[front];
    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = front + 1;
        if (front == MAX)
        {
            front = 0;
        }
    }
    count--;
    return item;
}

void display()
{
    int i, index = front;
    if (count == 0)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    for (i = 0; i < count; i++)
    {
        printf("%d ", q[index]);
        index++;
        if (index == MAX)
        {
            index = 0;
        }
    }
    printf("\n");
}

int main()
{
    int choice = 0;
    int item;

    while (1)
    {
        printf("\n1. Insert element into the queue\n");
        printf("2. Delete element from the queue\n");
        printf("3. Display queue\n");
        printf("4. End\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter the element to insert: ");
            scanf(" %d", &item);
            insert(item);
        }
        else if (choice == 2)
        {
            item = del();
            printf("Deleted element: %d\n", item);
        }
        else if (choice == 3)
        {
            display();
        }
        else if (choice == 4)
        {
            printf("End\n");
            exit(0);
        }
        else
        {
            printf("Invalid choice\n");
        }
    }

    return 0;
}
