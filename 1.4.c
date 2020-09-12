/* 1.4 Create arrays A, B of size 3, C of size 6, merge A and B into C. */

#include <stdio.h>  
  
void  main()  
{  
    int A[3],
	B[3],
	C[6]; 
    int i,j=0;  
    
    printf("Enter elements for A: \n");
    for(i=0; i<3; i++){
    	scanf("%d", &A[i]);
    	C[i] = A[i];
	}
	
  
  printf("Enter elements for B: \n");
    for(i=0; i<3; i++){
    	scanf("%d", &B[i]);
	}
	for(i=3; i<6; i++){
		
		C[i] = B[j];
		j++;
	}
	
	printf("Elements of C: ");
	
	for(i=0; i<6; i++){
		printf("%d", C[i]);
	}

}

