/* 1.7 Delete an element from the array from user defined position. */

#include <stdio.h>  
  
void  main()  
{  
    int arr[5] = {1,2,3,4,5}, i,size= 5, pos;
    

    
     printf("Array is as follow : ");
    for(i=0; i<size; i++)
    {
       	printf("%d ",arr[i]);
    }

    printf("\nEnter the element position to delete : ");
    scanf("%d", &pos);
    
      if(pos < 0 || pos > size)
    {
        printf("Invalid position! Please enter position between 1 to 4");
    }
    else
    {
    	for(i=pos - 1; i<size; i++){
    		arr[i] = arr[i+1];
		}
		size--;
		
		printf("\nElements of array after delete are : ");
        for(i=0; i<size; i++)
        {
            printf("%d ", arr[i]);
        }
    }

}

