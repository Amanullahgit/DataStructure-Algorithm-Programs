/* 2.5 Write a program to find the power of a given number using stack. */

#include<stdio.h>
#include <math.h>

void push();
int pop();
int powerFinder();
int stack[2];
int top = 0;
int i;
int item;

main() {
    int n;
    printf("Enter base number: ");
    scanf("%d",&n);
	push(n);
	printf("Enter power number: ");
	scanf("%d",&n);
	push(n);
	
	printf("%d", powerFinder());
	
	
}

int powerFinder(){
	return pow(pop(), pop());
}


int pop(){
	if(top<=-1){
		printf("\n\t Stack is under flow");
	}else{
		top = top - 1;
		item = stack[top];
		
		return item;
	}
}



void push(int n)
{
    if(top>=2)
    {
        printf("\n\tSTACK is over flow");
        
    }
    else
    {
		stack[top] = n;
		top = top + 1;
    }
}
