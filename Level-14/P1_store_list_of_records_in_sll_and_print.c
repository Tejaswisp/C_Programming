/* 1.SLL: Store the list of records in a singly linked list. Print all entries in the linked list.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 50 

typedef struct node
{
    int id;
    char f_name[50];
    char l_name[50];
    char gender[10];
    char occupation[20];
    int age;
    struct node *next;
}club_mem;

void store_in_list(club_mem **head,club_mem m);
void print(club_mem **head);
void release_memory(club_mem **head);

int main()
{
    FILE *fp;
    club_mem *head = NULL;
    club_mem *temp = head,*temp1;
    char buff1[N],buff2[N],buff3[N],buff4[N],buff5[N];
    
    fp = fopen("Club_Membership_2020.txt","r");
    if(fp == NULL)
    {
        printf("Error\n");
        exit(1);
    }
 
   for(int i=0; i<16; i++)
   {
       club_mem m;
       if(i == 0)
       {
            fscanf(fp,"%s %s %s %s %s",buff1,buff2,buff3,buff4,buff5);
            printf("%s\t%s\t\t\t%s\t%s\t%s\n",buff1,buff2,buff3,buff4,buff5);
       }
       else
       {
           fscanf(fp,"%d %s %s %s %s %d",&m.id,m.f_name,m.l_name,m.gender,m.occupation,&m.age);
           store_in_list(&head,m);
       }
   }
   print(&head);
   
   release_memory(&head);
    fclose(fp);

    return 0;
}

void store_in_list(club_mem **head,club_mem m)
{
    club_mem *newnode,*temp;
    newnode = (club_mem *)malloc(sizeof(club_mem));
    if(newnode == NULL)
    printf("Unable to allocate memory\n");
    else 
    {
        newnode->id = m.id;
        strcpy(newnode->f_name,m.f_name);
        strcpy(newnode->l_name,m.l_name);
        strcpy(newnode->gender,m.gender);
        strcpy(newnode->occupation,m.occupation);
        newnode->age = m.age;
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

void print(club_mem **head)
{
    if(*head == NULL)
    printf("No data in the file\n");
    else
    {
        club_mem *temp = *head;
        while(temp != NULL)
        {
            printf("%d\t%s %s\t\t%s\t%s\t\t%d\n",temp->id,temp->f_name,temp->l_name,temp->gender,temp->occupation,temp->age);
            temp = temp->next;
        }
    }
}

void release_memory(club_mem **head)
{
    club_mem *temp,*temp1;
    temp = *head;
    while(temp != NULL)
   {
       temp1 = temp;
       temp = temp->next;
       free(temp1);
   }
}
