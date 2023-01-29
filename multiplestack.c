#include<stdio.h>
#include<stdlib.h>
#define  MAXSIZE 20
typedef struct stack* stackptr;
typedef struct 
{
    int key;
}element;

struct stack{
    element data;
    stackptr link;
    };
stackptr top[MAXSIZE];
void push(int i,element item)
{
    stackptr temp;
    temp=malloc(sizeof(stackptr*));
    temp->data=item;
    temp->link=top[i];
    top[i]=temp;
    
}
element pop(int i)
{   element item;
    stackptr temp;
    temp=top[i];
    if(temp==0)
    printf("stack is empty");
    else{
        item=temp->data;
        top[i]=temp->link;
        free(temp);
        return item;
    }
}
void display(int i)
{
    stackptr temp;
    temp=top[i];
     if(temp==0)
    printf("stack is empty");
    for (; temp;temp=temp->link )
    {
     printf("%d\t",temp->data);   
    }
    
   
}
void main()
{
    for(int j=0;j< MAXSIZE ;j++)
    top[j]=NULL;
    int choice,i;
    int x;
    element item;
    printf("1:PUSH\n2:POP\n3:display\n4:exit");
    
    while (1)
    {
        printf("\nenter your choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:printf("enter the no of stack in which you want to insert:");
           scanf("%d",&i);
           printf("enter the element :");
           scanf("%d",&item.key);
           push(i-1,item);
        break;
    case 2:printf("enter the no of stack in which you want to pop:");
           scanf("%d",&i);
             item=pop(i-1);
             printf("the poped element of %d stack is:%d",i,item);
             break;
    case 3:
    printf("enter the no of stack in which you want to display:");
           scanf("%d",&i);
           display(i-1);
             break;
    case 4:exit(0);
             break;
    default:printf(" enter the valid input");
        
    }
    }
}