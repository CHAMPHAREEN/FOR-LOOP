//SERIES4(x/1+x/2+x/3+.......x/n)
#include<stdio.h>
main()
{
	int i,n,x;
	float s=0;
	printf("ENTER VALUE OF n AND x:");
	scanf("%d %d",&n,&x);
	for(i=1;i<=n;i++)
	{
		s+=(float)x/i;
	}
	printf("SUM OF GIVEN SERIES=%.3f",s);
}
