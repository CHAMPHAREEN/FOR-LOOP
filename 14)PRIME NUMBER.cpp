//PRIME NMBER
#include<stdio.h>
main()
{
	int n,i,f=0;
	printf("ENTER NUMBER:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
	    printf("%d IS NOT A PRIME NUMBER",n);	
	}
	else
	{
		printf("%d IS A PRIME NUMBER",n);
	}
}

