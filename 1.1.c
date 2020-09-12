/* 1.1 Create an array of size 10, input values and print the array, and search an
element in the array. */

#include <stdio.h>  
  
void  main()  
{  
    int arr[10]; 
    int i;  
    int s,found=0;
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
    } 
    printf("\n");	
    
    printf("\nSearch element: ");
    scanf("%d", &s);
    for(i=0; i<10; i++){
    	if(arr[i] == s){
    		found = 1;
    		break;
		}
	}
	if(found == 1){
		printf("element available at: %d",i+1);
	}else
		{
			printf("element not available");
		}
}

