//SERIES4(1/x^0+1/x+1/x^2+1/x^3.......1/x^n)
#include<stdio.h>
#include<math.h>
main()
{
	int i,n,x;
	float s=0;
	printf("ENTER VALUE OF n AND x:");
	scanf("%d %d",&n,&x);
	for(i=0;i<=n;i++)
	{
		s+=(float)1/pow(x,i);
	}
	printf("SUM OF GIVEN SERIES=%.3f",s);
}
