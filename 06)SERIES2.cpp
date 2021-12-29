//SERIES2(1+1/2+1/3+.......1/n)
#include<stdio.h>
main()
{
	int i,n;
	float s=0;
	printf("ENTER VALUE OF n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s+=(float)1/i;
	}
	printf("SUM OF GIVEN SERIES=%.3f",s);
}
