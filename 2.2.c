/* 2.2 Write a program to find out factorial of number using recursion (stack). */

#include<stdio.h>
long int multiplyNumbers(int n);
void push();
int pop();
int stack[100];
int top;
int i;
int item;
main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    top = n;
    push();

    printf("\nFactorial of %d = %ld", n, multiplyNumbers(top));

}

long int multiplyNumbers(int n) {

    if (n>0)
        return pop()*multiplyNumbers(n-1);
    else
        return 1;
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
