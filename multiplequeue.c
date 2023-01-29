#include<stdio.h>
#include<stdlib.h>
typedef struct 
{
    int key;
}element;

typedef struct queue* queueptr;
 struct queue
{
  element data;
  queueptr link;
};

queueptr rear[100],front[100];
void PUSH(int i,element item)
{
    queueptr temp;
    temp=(queueptr)malloc(sizeof(struct queue));
    temp->data=item;
    temp->link=NULL;
    if(front[i])
    rear[i]->link=temp;
    else
    front[i]=rear[i]=temp;
    
}
element POP(int i)
{
    element item;
    queueptr temp;
    temp=front[i];
    if(temp==0)
    printf("queue is empty");
    else{
        item=temp->data;
        front[i]=temp->link;
        free(temp);
        return item;
    }
}
void display(int i)
{
    queueptr temp;
    temp=front[i];
    if(temp==0)
    printf("queue empty");
    for(;temp;temp=temp->link)
    printf("%d\t",temp->data);

}

void main()
{
    
    for(int j=0;j< 100 ;j++)
    rear[j]=NULL;
    for(int j=0;j< 100 ;j++)
    front[j]=NULL;
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
    case 1:printf("enter the no of queue in which you want to insert:");
           scanf("%d",&i);
           printf("enter the element :");
           scanf("%d",&item.key);
           PUSH(i-1,item);
        break;
    case 2:printf("enter the no of queue in which you want to pop:");
           scanf("%d",&i);
             item=POP(i-1);
             printf("the poped element of %d stack is:%d",i,item);
             break;
    case 3:
    printf("enter the no of queue in which you want to display:");
           scanf("%d",&i);
           display(i-1);
             break;
    case 4:exit(0);
             break;
    default:printf(" enter the valid input");
        
    }

}
}