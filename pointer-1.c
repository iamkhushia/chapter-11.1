#include<stdio.h>

main()
{
	//Write a Program to find the square of each element of a given 1D array using a Pointer
	
	int a[100];
	int *ptr,i,n;
	
	printf("enter the size of array = ");
	scanf("%d",&n);
	
	ptr = &a;
	
	printf("\n--------------------\n");
	for(i=1; i<=n; i++)
	{
	    printf("enter the array element = ");
	    scanf("%d",&a[i]);
	}
	
	printf("\n--------------------\n");
	printf("Square of each element : \n");
	for(i=1; i<=n; i++)
	{
	    printf("%d => %u\n",(*(ptr+i))*(*(ptr+i)),(ptr+i));
	}
}