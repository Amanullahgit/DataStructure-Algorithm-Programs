/* 2.1 Implement stack using array with following operations:
push, pop, print, peek, peep, change, exit */

#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push();
void pop();
void display();
void peek();
void peep();
void change();
int main()
{
    //clrscr();
    top=-1;
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.PEEK\n\t 5.PEEP\n\t 6.CHANGE \n\t 7.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
             case 4:
            {
               peek();
                break;
            }
             case 5:
            {
                peep();
                break;
            }
            case 6:
            {
               change();
                break;
            }
            case 7:
            {
                printf("\n\t EXIT POINT ");
                return;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
                
        }
    }
    while(choice!=7);
    return 0;
}
void push()
{
    if(top>=n-1)
    {
        printf("\n\tSTACK is over flow");
        
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements is %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
   
}

void peek(){
	if(top<=-1)
    {
        printf("\n\t Stack is under flow");
    }
    else{
    	printf("\n\t The Top most element is: %d",stack[top]);
	}
}

void peep(){
	printf("\nEnter index to peep: ");
	scanf("%d", &i);
	if(i <= top && i >= 0){
		printf("%d",stack[i]);
	}else{
		printf("\nindex out of range");
	}
}

void change(){
	printf("\nEnter index to change: ");
	scanf("%d",&i);
	
	if(i <= top && i >= 0){
		printf("\nEnter element to change: ");
		scanf("%d",&n);
		stack[i] = n;
		printf("\nUpdated");
	}else{
		printf("\nindex out of range");
	}
}

