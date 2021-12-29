//SERIES3(1+1/2^2+1/3^2+.......1/n^2)
#include<stdio.h>
main()
{
	int i,n;
	float s=0;
	printf("ENTER VALUE OF n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s+=(float)1/(i*i);
	}
	printf("SUM OF GIVEN SERIES=%.3f",s);
}
