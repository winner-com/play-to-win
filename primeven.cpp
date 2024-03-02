#include<stdio.h>
main()
{
	int n, i, count=0;
	printf("Enter any number : ");
	scanf("%d",&n);
	
    if (n%2==0)
	printf("The given number is even");
	else
	for (i=0;i<=n;i++)
	{
	    if (n%i==0)
	    {
		    count++;
	    }
	}
	if (count=2)
	printf("\nThe given number is prime");
	else
	printf("\nThe given number is not prime");
}
