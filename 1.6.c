/* 1.6 Insert an element into the array at user defined position */

#include <stdio.h>  
  
void  main()  
{  
    int arr[100], i,size, num, pos;
    
        printf("Enter size of the array : ");
    scanf("%d", &size);
    
     printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
        printf("Enter element to insert : ");
    scanf("%d", &num);
    printf("Enter the element position : ");
    scanf("%d", &pos);
    
      if(pos > size+1 || pos <= 0)
    {
        printf("Invalid position! Please enter position between 1 to %d",size);
    }
    else
    {
    	for(i=size-1; i>=pos; i--){
    		arr[i+1] = arr[i];
		}
		arr[pos] = num;
		size++;
		
		 printf("Array elements after insertion : ");
        for(i=0; i<size; i++)
        {
            printf("%d\t", arr[i]);
        }
    }

}

