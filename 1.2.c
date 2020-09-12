/* 1.2 Create an array of size 10, input values and display sum and average of all
elements in the array */

#include <stdio.h>  
  
void  main()  
{  
    int arr[10]; 
    int i;  
    int sum=0, average;
    
       printf("\n\nRead and Print elements of an array:\n");
       printf("-----------------------------------------\n");	
  
    printf("Input 10 elements in the array :\n");  
    for(i=0; i<10; i++)  
    {  
	    printf("element - %d : ",i);
        scanf("%d", &arr[i]);  
    }  
  
    printf("\nElements in array are: ");  
    for(i=0; i<10; i++)  
    {  
        printf("%d  ", arr[i]);  
        sum = sum + arr[i];
    } 
    printf("\n");	
    
    average = sum / 10;
    
    printf("\nsum is: %d",sum);
    printf("\naverage is: %d", average);
}

