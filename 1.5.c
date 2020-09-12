/* 1.5 Create an array of size 10, find the largest value from the array. */

#include <stdio.h>  
  
void  main()  
{  
    int A[10], i;
    
    printf("Enter elements for A: \n");
    for(i=0; i<10; i++){
    	scanf("%d", &A[i]);
	}
	int max = A[0];

	for(i=0; i<10; i++){
		if (A[i] > max) 
            max = A[i]; 
	}
	printf("Largest is: %d",max);

}

