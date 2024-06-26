/* Program to implement Single linked list with functions insert_at_front, insert_at_rear, 
insert_at_position,delete_at_front, delete_at_rear, delete_at_position */

#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

void print(struct node **head);
void insert_at_front(struct node **head,int data);
void insert_at_rear(struct node **head,int data);
void insert_at_position(struct node **head,int data,int pos);
void delete_at_front(struct node **head);
void delete_at_rear(struct node **head);
void delte_at_position(struct node **head);
void delete_at_position(struct node **head,int pos);

int main()
{
    struct node *head = NULL;
    int choice,data,pos;
    while(1)
    {
        printf("Enter choice:\n");
        printf("1.insert_at_front\n2.insert_at_rear\n3.insert_at_position\n4.delete_at_front\n5.delete_at_rear\n6.delete_at_position\n7.print\n8.exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("Enter data: ");
            scanf("%d",&data);
            insert_at_front(&head,data);
            break;
            case 2: printf("Enter data: ");
            scanf("%d",&data);
            insert_at_rear(&head,data);
            break;
            case 3: printf("Enter data: ");
            scanf("%d",&data);
            printf("Enter position: ");
            scanf("%d",&pos);
            insert_at_position(&head,data,pos);
            break;
            case 4: delete_at_front(&head);
            break;
            case 5: delete_at_rear(&head);
            break;
            case 6: printf("Enter the postion: ");
            scanf("%d",&pos);
            delete_at_position(&head,pos);
            break;
            case 7: print(&head);
            break;
            case 8: exit(0);
            break;
        }
    }
    return 0;
}

void insert_at_front(struct node **head,int data)
{
    struct node *newnode,*temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    if(newnode == NULL)
    printf("Unable to access memory\n");
    else 
    {
        newnode->data = data;
        newnode->next = NULL;
        if(*head == NULL)
        {
            *head = newnode;
        }
        else
        {
            temp = *head;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
            
        }
    }
}

void print(struct node **head)
{
    struct node *temp = *head;
    if(*head == NULL)
    printf("List is empty\n");
    else
    {
        printf("List contains:\n");
        while(temp != NULL)
        {
            printf("%d ",temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

void insert_at_rear(struct node **head,int data)
{
    struct node *newnode,*temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    if(newnode == NULL)
    printf("Unable to allocate memory\n");
    else
    {
        newnode->data = data;
        newnode->next = NULL;
        if(*head == NULL)
        {
            *head = newnode;
        }
        else
        {
            newnode->next = *head;
            *head = newnode;
        }
    }
}

void insert_at_position(struct node **head,int data,int pos)
{
    struct node *newnode,*temp,*prev;
    newnode = (struct node *)malloc(sizeof(struct node));
    if(newnode == NULL)
    printf("Unable to allocate memory\n");
    else
    {
        newnode->data = data;
        newnode->next = NULL;
        if(pos == 1)
        {
            newnode->next = *head;
            *head = newnode;
        }
        else
        {
            temp = *head;
            for(int i=1; i<pos; i++)
            {
                prev = temp;
                temp = temp->next;
            }
            prev->next = newnode;
            newnode->next = temp;
        }
    }
}

void delete_at_front(struct node **head)
{
    struct node *temp;
    if(*head == NULL)
    printf("List is empty\n");
    else
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

void delete_at_rear(struct node **head)
{
    struct node *temp,*prev;
    if(*head == NULL)
    printf("List is empty\n");
    else 
    {
        temp = *head;
        while(temp->next != NULL)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        free(temp);
    }
}

void delete_at_position(struct node **head,int pos)
{
    struct node *temp,*prev;
    if(pos == 1)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
    else
    {
        temp = *head;
       for(int i=1; i<pos; i++)
       {
           prev = temp;
           temp = temp->next;
       }
       prev->next = temp->next;
       free(temp);
    }
}
