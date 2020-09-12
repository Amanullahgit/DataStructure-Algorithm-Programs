/* 2.3 Write a program to print string in reverse order using stack. */

#include <stdio.h>
#include <string.h>

#define MAX 100	

int top=-1;
int item;

char stack_string[MAX];
void pushChar(char item);
char popChar(void);
 
int main()
{
    char str[MAX];
    
    int i;
    
    printf("Input a string: ");
    scanf("%s",str); 
    
    for(i=0;i<strlen(str);i++)
        pushChar(str[i]);
        
    for(i=0;i<strlen(str);i++)
        str[i]=popChar();

    printf("Reversed String is: %s\n",str);
    
    return 0;
}
 
void pushChar(char item)
{
    if(top==MAX-1)
    {
        printf("\nStack is FULL !!!\n");
        return;
    }
    
    top=top+1;
    stack_string[top]=item;
}
 
 char popChar()
{
    if(top==-1)
    {
        printf("\nStack is EMPTY!!!\n");
        return 0;
    }

    item = stack_string[top];
    top=top-1;
    return item;
}
 
