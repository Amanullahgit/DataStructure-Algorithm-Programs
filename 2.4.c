/* 2.4 Write a program to find factorial of a given integer number using stack. */

#include<stdio.h>
void push();
int pop();
int stack[100];
int top;
int i;
int item;
int factorial = 1;
main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    top = n;
    push();
    for(i=top; i>0; i--){
    	factorial = factorial * pop();
	}

    printf("\nFactorial of %d = %ld", n, factorial);

}


int pop(){
	if(top<=-1){
		printf("\n\t Stack is under flow");
	}else{
		item = stack[top];
		top = top - 1;
		return item;
	}
}



void push()
{
    if(top>=100)
    {
        printf("\n\tSTACK is over flow");
        
    }
    else
    {
       for(i=0; i<=top; i++){
			stack[i] = i;
		}
					printf("values inserted into stack!");

    }
}
