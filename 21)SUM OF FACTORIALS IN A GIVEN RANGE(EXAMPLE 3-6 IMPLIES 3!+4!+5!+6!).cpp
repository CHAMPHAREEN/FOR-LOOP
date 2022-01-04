//SUM OF FACTORIALS IN A GIVEN RANGE(EXAMPLE 3-6 IMPLIES 3!+4!+5!+6!)
#include<stdio.h>
main()
{
	int ll,ul,f,i,s=0,j;
	printf("ENTER LOWER LIMIT:");
	scanf("%d",&ll);
	printf("ENTER UPPER LIMIT:");
	scanf("%d",&ul);
	for(i=ll;i<=ul;i++)
	{
		f=1;
		for(j=1;j<=i;j++)
		{
			f=f*j;
		}
		  s=s+f;
	}
	printf("SUM OF FACTORIAL OF NUMBERS IN THE RANGE %d TO %d=%d",ll,ul,s);
	
}
