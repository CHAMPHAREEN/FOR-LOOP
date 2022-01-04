//GREATEST COMMON DIVISOR OF 2 NUMBERS
#include<stdio.h>
main()
{
	int fn,sn,i,gcd=1;
	printf("ENTER FIRST NUMBER:");
	scanf("%d",&fn);
	printf("ENTER SECOND NUMBER:");
	scanf("%d",&sn);
	for(i=1;i<=fn&&i<=sn;i++)
	{
		if(fn%i==0&&sn%i==0)
		{
			gcd=i;
		}
	}
	printf("GCD OF %d AND %d=%d",fn,sn,gcd);
}
