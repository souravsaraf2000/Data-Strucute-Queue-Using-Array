#include<stdio.h>
#include<conio.h>
int size,front=-1,rear=-1;
void insert(int arr[])
{
    int num;
    if(rear==size-1)
        printf("\n\aQueue Overflow!!!\n");
    else{
        printf("\nEnter No. For Insertion=");
        scanf("%d",&num);
        rear++;
        arr[rear]=num;
        printf("\nInsertion Successful\n");
        }
    if(front==-1)
        front=0;
}
void Delete(int arr[])
{
    if(rear==-1)
        printf("\n\aQueue Underflow!!!\n");
    else
    {
        int x;
        x=arr[front];
         if(front==rear)
         {
             printf("\nDeleted element= %d ! It was the last element!!\n",x);
             front=rear=-1;
         }
         else
         {
            front++;
            printf("\nDeleted Element= %d !!\n",x);
         }
    }
}
void display(int arr[])
{
    int i;
    printf("Queue :\n");
    for(i=front;i<=rear;i++)
        printf("%d\t",arr[i]);
}
int main()
{
    int x,arr[50];
    char ch;
    printf("Enter the maximum number of elements=");
    scanf("%d",&size);
    do
    {
        system("cls");
        printf("----------Queue As An Array----------\n");
        printf("\n\tPress 1 for Insertion\n\tPress 2 for Deletion\n\tPress 3 for Display\n\tEnter your choice=");
        scanf("%d",&x);
        switch(x)
        {
            case 1: insert(arr);break;
            case 2: Delete(arr);break;
            case 3: display(arr);break;
            default:printf("\nWrong Choice!!! Enter Again!!!");break;
        }
        printf("\nDo You Want To Continue(Y/N)=");
        ch=getch();
    }while(ch=='Y'||ch=='y');
}
