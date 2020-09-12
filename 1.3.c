/* 1.3 Create arrays A, B and C of size 3, perform C = A + B. */

#include <stdio.h>  
  
void  main()  
{  
    int A[10] = {1,2,3,4,5,6,7,8,9,10},
	B[10] = {1,2,3,4,5,6,7,8,9,10}, 
	C[10]; 
    int i;  
       printf("\nA + B = C");
  
    for(i=0; i<10; i++)  
    {  
       C[i] = A[i] + B[i];
    } 
   
    for(i=0; i<10; i++){
    	 printf("\n%d + %d = %d  ", A[i], B[i], C[i]);  
	}
}

