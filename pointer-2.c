#include<stdio.h>

main()
{
	// Write a Program to swap two variables using Pointers
	
	int x,y,swap;
	int *ptr1,*ptr2;
	
	printf("enter the value of X = ");
	scanf("%d",&x);
	
	printf("enter the valueof Y = ");
	scanf("%d",&y);
	
	ptr1 = &x;
	ptr2 = &y;
	
	swap = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = swap;
	
	printf("\n-----------------------\n");
	printf("Before swapping : \n");
	printf("swap : A = %d\n ",*ptr2);
	printf("swap : B = %d\n ",*ptr1);
	
	printf("\n-----------------------\n");
	printf("After swapping : \n");
	printf("swap : A = %d\n ",*ptr1);
	printf("swap : B = %d\n ",*ptr2);
}